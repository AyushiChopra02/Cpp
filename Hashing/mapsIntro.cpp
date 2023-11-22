#include<iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std  ;
int main(){

    // creation
    map<string, int> m;

    //insertion 
    //1 method
    pair<string , int> p = make_pair("babbar" , 3);
    m.insert(p);

    //2 methd
    pair<string , int> pair2("love" , 2);
    m.insert(pair2);

    //3
    m["mera"] =  1 ;

    m["mera"] = 2 ;   
    // ab jo m hai usme 1 ki jgah 2 aajega

//search
//1
cout << m["mera"] << endl ;
//2
cout << m.at("babbar") << endl ;


//cout se pta lgjata h koi cheez prsnt h k nai
// hai to 1 ayega absent h to 2

//size
cout << m.size() << endl ;

//to check presence
cout <<  m.count("love") << endl ;

//erase
m.erase("love");
cout << m.size() << endl ;
// ab erase k baad jb size dekege to vo ek se reduce hojayega

//iterator
unordered_map<string , int> :: iterator it = m.begin();
while (it != m.end()){
    cout << it-first << " " << it-second << endl ;
    it++;
    // AB JB PRINT KRE H TO series vise print nai hora h...kuki unordered_map kra
}
return 0 ;

}