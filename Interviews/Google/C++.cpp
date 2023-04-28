
        /root
         / \ 
        /   \
    /abc    /ghf
    / \
   /   \ 
file1  /subDir
         \
        file2


getChildren("/root/"); //return a vector<string> ["/root/abc", "root/ghf"]
getChildren("/root/abc"); //return a vector<string> ["/root/abc/file1", "root/abc/subDir/"]
getChildren("/root/asd"); //return a vector<string> [] path that doesnt exist
getChildren("/root/abc/file1"); //return a vector<string> [] path that doesnt exist
...


idDir("/root"); //true
idDir("/root/abc/file1"); //false
idDir("/root/asd"); //false //that doesnt exist
...

//delete function deletes only files and empty folders
delete('/root/ghf'); // deletes ghf folder
delete('/root/abc/file1'); // deletes file1
delete('/root/subDir'); // wont delete it as it contains some information

        /root
         / \ 
        /   \
    /abc    /ghf
    / \
   /   \ 
file1  /subDir
         \
        file2
//your task is to implement a function that takes for example
DeleteSub("/root/abc")
//and delete all of the contents inside and only leave us with 

/root
    \
     ghf

//my solution was 

void DeleteSub(string root)
{
    if(isDir(root))
    {
        vector<string> childs = getChldresn(root);
        for(auto childel: childs)
        {
            DeleteSub(childel);
        }
        delete(root);
    }
    else
    {
        //if it is an existing file then delete it
        if(getChildren(root).size())
            delete(root);
    }    
}






