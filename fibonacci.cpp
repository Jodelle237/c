#include <iostream>
using namespace std;
int main(){
    unsigned int n, i, f, f_0, f_1;
    f_0 = 0;
    f_1 = 1;
    cout<<"Entrez le nombre de terme de la suite de fibonacci que vous voulez afficher:";
    cin>>n;
    if(n<0){
        cout << "fib(" <<n <<")=" <<n <<endl;
    }
    else{
        for (i=0; i<=n; i++){
            f = f_0 + f_1;
            f_0 = f_1;
            f_1 = f;
        }
        cout <<"fib(" <<n <<")=" <<f <<endl;
    }
    return 0;
} la suite fibonacci est une séquence de nombres ou chaque nombre est la somme des deux précedents Ce code demande à l'utilisateur de saisir le nombre de terme qu'il souhaite afficher, puis calcule ce terme en utilisant une boucle for.

   