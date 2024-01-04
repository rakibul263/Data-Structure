**[List Built-in Functions:]{.underline}**

1.  **Constructor**

  ---------------------------------------------------------------------------------
  **Name**                         **Details**                       **Time
                                                                     Complexity**
  -------------------------------- --------------------------------- --------------
  **list\<type\>myList;**          Construct a list with 0 elements. O(1)

  **list\<type\>myList(N);**       Construct a list with N elements  O(N)
                                   and the value will be garbage.    

  **list\<type\>myList(N,V);**     Construct a list with N elements  O(N)
                                   and the value will be V.          

  **list\<type\>myList(list2);**   Construct a list by copying       O(N)
                                   another list list2.               

  **list\<type\>myList(A,A+N);**   Construct a list by copying all   O(N)
                                   elements from an array A of size  
                                   N.                                
  ---------------------------------------------------------------------------------

2.  **Capacity**

  ---------------------------------------------------------------------------
  **Name**                **Details**               **Time Complexity**
  ----------------------- ------------------------- -------------------------
  **myList.size()**       Returns the size of the   O(1)
                          list.                     

  **myList.max_size()**   Returns the maximum size  O(1)
                          that the vector can hold. 

  **myList.clear()**      Clears the list elements. O(N)
                          Do not delete the memory, 
                          only clear the list.      

  **myList.empty()**      Return true/false if the  O(1)
                          list is empty or not.     

  **myList.resize()**     Change the size of the    O(K); where K is the
                          list.                     difference between new
                                                    size and current size.
  ---------------------------------------------------------------------------

3.  **Modifiers**

  ------------------------------------------------------------------------------------------------------------------
  **Name**                                                       **Details**               **Time Complexity**
  -------------------------------------------------------------- ------------------------- -------------------------
  **myList= or myList.assign(list2.begin(),list2.end())**        Assign another list.      O(N)

  **myList.push_back()**                                         Add an element to the     O(1)
                                                                 tail.                     

  **myList.push_front()**                                        Add an element to the     O(1)
                                                                 head.                     

  **myList.pop_back()**                                          Delete the tail.          O(1)

  **myList.pop_front()**                                         Delete the head.          O(1)

  **myList.insert()**                                            Insert elements at a      O(N+K); where K is the
                                                                 specific position.        number of elements to be
                                                                                           inserted.

  **myList.erase()**                                             Delete elements from a    O(N+K); where K is the
                                                                 specific position.        number of elements to be
                                                                                           deleted.

  **replace(myList.begin(),myList.end(),value,replace_value)**   Replace all the value     O(N)
                                                                 with replace_value. Not   
                                                                 under a list STL.         

  **find(myList.begin(),myList.end(),V)**                        Find the value V. Not     O(N)
                                                                 under a list STL.         
  ------------------------------------------------------------------------------------------------------------------

4.  **Operations**

  ----------------------------------------------------------------------------------------
  **Name**                             **Details**               **Time Complexity**
  ------------------------------------ ------------------------- -------------------------
  **myList.remove(V)**                 Remove the value V from   O(N)
                                       the list.                 

  **myList.sort()**                    Sort the list in          O(NlogN)
                                       ascending order.          

  **myList.sort(greater\<type\>())**   Sort the list in          O(NlogN)
                                       descending order          

  **myList.unique()**                  Deletes the duplicate     O(N), with sort O(NlogN)
                                       values from the list. You 
                                       must sort the list first. 

  **myList.reverse()**                 Reverse the list.         O(N)
  ----------------------------------------------------------------------------------------

5.  **Element access**

  --------------------------------------------------------------------------------
  **Name**                     **Details**               **Time Complexity**
  ---------------------------- ------------------------- -------------------------
  **myList.back()**            Access the tail element.  O(1)

  **myList.front()**           Access the head element.  O(1)

  **next(myList.begin(),i)**   Access the ith element    O(N)
  --------------------------------------------------------------------------------

6.  **Iterators**

  ------------------------------------------------------------------------
  **Name**             **Details**               **Time Complexity**
  -------------------- ------------------------- -------------------------
  **myList.begin()**   Pointer to the first      O(1)
                       element.                  

  **myList.end()**     Pointer to the last       O(1)
                       element.                  
  ------------------------------------------------------------------------
