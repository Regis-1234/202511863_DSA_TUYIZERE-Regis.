 Q1. #include <iostream>
     #include <string>
      using namespace std;

   int main() {
    string names[100];
    int ages[100];
    int n, i;
    string key;
    bool found = false;

    cout << "Enter number of family members: ";
    cin >> n;

    
    for(i = 0; i < n; i++) {
        cout << "Enter name of member " << i+1 << ": ";
        cin >> names[i];
        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
    }

    cout << "Enter name to search: ";
    cin >> key;

    
    for(i = 0; i < n; i++) {
        if(names[i] == key) {
            cout << key << " was found and is aged " << ages[i] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Not found" << endl;
    }

    return 0;
}

Q2. #include <iostream>
       #include <string>
     using namespace std;

     int main() {
    string names[7] = {"Zuck","Shayd","Emely","Amjed","Esther","Manar","Anne"};
    int n = 7;

    
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
            }
        }
    }

    
    cout << "Sorted names: ";
    for(int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    return 0;
}

Q3. #include <iostream>
    using namespace std;

     int main() {
    int arr[8] = {109,99,23,45,23,2,5,1};
    int n = 8;

    
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    
    cout << "Sorted numbers: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
