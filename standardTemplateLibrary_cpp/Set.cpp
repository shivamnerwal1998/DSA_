/**

SET stores unique elements and they  are stored in sorted order( Ascending / Decending )
  
  1. Set is implemented using RedBlack tree.
  2. Insertion , Removal ,Searching have logarithmic time complexity . 
  3. Set is an Associated container that contains a sorted set of unique objects
      of type key . 
  4. We can pass the order of sorting while constructing the set object .

**/


/**
  
  FUNCTIONS :
  1. size() ; 
  2. clear() ; (Removes all the elements from the set)
  3. count() ; 
  4. find( num ) 
  find will search a number and returns iterator to that number
  if that number not found it will retuen s.end() ..
  5.empty()
  
  6. INSERT : -   
  
     # insert( key  ) - 
        Returns pair consisting of iterator to inserted element and 
        bool set to true if insertion took place  . 
      
     # insert( iterator pos1 , iterator pos2 ) - 
        Inserts element in the range [pos1 , pos2)
        ex :- insert( v.begin() , v.end() ) ;  
        
     # insert(initializer_list l)
        Returns elements from initializer list
        Returns nothing  . 
        ex:- insert({1,2,3,4,5,}) ; 
     
   7. ERASE :- 
   
      # erase( iterator pos )
        remove element at positiuon pos
        returns iterator following lasyt element removed 
        
       # erase( iterator pos1 , iterator pos2 )
        remove in range [pos1 , pos2)
        retuens iterator following last element removed 
      
      # erase(key)
        removes elements with key( if present )
        returns the umber of elements removed 
      
  
 

**/ 


