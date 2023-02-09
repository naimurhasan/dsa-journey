# defining node
class Node:
    def __init__(self, data: int) -> None:
        self.data = data
        self.next = None

# defining link list
class LinkedList:
        def __init__(self) -> None:
             self.head = None

        # print list
        def printList(self) -> None:
            temp = self.head
            while(temp):
                print(temp.data, end=" ")
                temp = temp.next
            print("")
        
        def push(self, data: int) -> None:
            # create new node
            node = Node(data)
            
            # assign current head to new node's
            node.next = self.head
            # current node change to head
            self.head = node

        def insert_afetr(self, prev_node: Node, data: int) -> None:
            # check the existence
            if prev_node is None:
                print("The given previous node must be in the list")
                return
        
            new_node = Node(data)
            
            # assign new nodes next to prveous elements next
            # so it can be placed at the position of prev node 
            new_node.next = prev_node.next
            
            # now safely replace
            prev_node.next = new_node
        
        def append(self, data: int) -> None:
            # O(N) time complexity
            new_node = Node(data)

            # if llist is empty
            if self.head is None:
                self.head = new_node
                return
            
            last = self.head
            while(last.next):
                last = last.next
            
            last.next = new_node
        
        def delete_node(self, key: int) -> None:
            temp = self.head
            # if the key is the first element
            if temp.data == key:
                self.head = temp.next
                temp = None
                return;



            


if __name__ == "__main__":
    # initiate linklist
    llist = LinkedList()
    
    # create nodes
    first = Node(3)
    second = Node(4)
    third = Node(5)

    # linking them as chain
    llist.head = first
    first.next = second
    second.next = third

    print("After adding 6")
    llist.printList()
    llist.push(6)

    print("After adding something after the head")
    llist.insert_afetr(llist.head, 7)
    llist.printList()

    print("After appending 8")
    llist.append(8)
    llist.printList()






    
    

    