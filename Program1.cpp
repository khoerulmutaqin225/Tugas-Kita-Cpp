/*
       Operasi File 1 (Menulis File)
       VS12 Express
       by R.S.
*/
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    // stream untuk menulis file
    ofstream myfile;

    // membuka file,
    // jika file tidak ditemukan maka file akan otomatis dibuat
    myfile.open("NilaiSiswa.txt", ios::app);

    cout << "OPERASI FILE 1" << endl;
    cout << "--------------" << endl;

    // fail() -> untuk memeriksa suatu kesalahan pada operasi file
    if (!myfile.fail())
    {
        // Menulis Bagian Atas
        myfile << "Nilai Mata Kuliah Alogaritma"
               << endl;
        // Menulis Pembuka
        myfile << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------"
               << endl;
        // Menulis Header
        myfile << "No.   | \t\t NIM         | \t\t Nama               | \t\t Tugas  | \t\t UTS  | \t\t UAS | \t\t Bobot   |Huruf  |"
               << endl;
        // Menulis Batas Atas
        myfile << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------"
               << endl;
        // menulis ke 1
        myfile << "1.    | \t\t 510410001   | \t\t Norah Jones        | \t\t 45     | \t\t 50   | \t\t 35  | \t\t  42.5   | F     |"
               << endl;
        // menulis ke 2
        myfile << "2.    | \t\t 510410002   | \t\t Gunawan Wicaksono  | \t\t 56     | \t\t 55   | \t\t 45  | \t\t  51.3   | D     |"
               << endl;
        // menulis ke 3
        myfile << "3.    | \t\t 510410003   | \t\t Wijoyo diningrat   | \t\t 78     | \t\t 56   | \t\t 88  | \t\t  75.4   | B     |"
               << endl;
        // menulis ke 4
        myfile << "4.    | \t\t 510410004   | \t\t Junko Krantz       | \t\t 40     | \t\t 56   | \t\t 62  | \t\t  53.6   | D     |"
               << endl;
        // menulis ke 5
        myfile << "5.    | \t\t 510410005   | \t\t Blaine Poudrier    | \t\t 95     | \t\t 86   | \t\t 41  | \t\t  70.7   | B     |"
               << endl; 
        // menulis ke 6
        myfile << "6.    | \t\t 510410006   | \t\t Felipe Huitt       | \t\t 79     | \t\t 79   | \t\t 99  | \t\t  87     | A     |"
               << endl;
        // menulis ke 6
        myfile << "7.    | \t\t 510410007   | \t\t Janee Millen       | \t\t 95     | \t\t 36   | \t\t 40  | \t\t  55.3   | D     |"
               << endl;
        // menulis ke 7
        myfile << "8.    | \t\t 510410008   | \t\t Lonny Kuykendall   | \t\t 45     | \t\t 54   | \t\t 47  | \t\t  48.5   | E     |"
               << endl;
        // menulis ke 8
        myfile << "9.    | \t\t 510410009   | \t\t Jalisa Masellia    | \t\t 64     | \t\t 60   | \t\t 84  | \t\t  70.8   | B     |"
               << endl;
        // menulis ke 9
        myfile << "10.   | \t\t 510410010   | \t\t Teresia Claiborne  | \t\t 63     | \t\t 85   | \t\t 49  | \t\t  64     | B     |"
               << endl;
        // menulis ke 10
        myfile << "11.   | \t\t 510410011   | \t\t Amina Zukowski     | \t\t 49     | \t\t 84   | \t\t 93  | \t\t  77.1   | C     |"
               << endl;
        // menulis ke 11
        myfile << "12.   | \t\t 510410012   | \t\t Chuck Downes       | \t\t 37     | \t\t 72   | \t\t 39  | \t\t  48.3   | E     |"
               << endl;
        // menulis ke 12
        myfile << "13.   | \t\t 510410013   | \t\t Flavia Jurado      | \t\t 94     | \t\t 94   | \t\t 72  | \t\t  85.2   | A     |"
               << endl;
        // menulis ke 13
        myfile << "14.   | \t\t 510410014   | \t\t Kelly Rocca        | \t\t 68     | \t\t 83   | \t\t 57  | \t\t  68.1   | C     |"
               << endl;
        // menulis ke 14
        myfile << "15.   | \t\t 510410015   | \t\t Ilse Tapp          | \t\t 52     | \t\t 41   | \t\t 55  | \t\t  49.9   | E     |"
               << endl;
        // menulis ke 15
        myfile << "16.   | \t\t 510410016   | \t\t Felice Okeefe      | \t\t 43     | \t\t 77   | \t\t 38  | \t\t  51.2   | D     |"
               << endl;
        // menulis ke 16
        myfile << "17.   | \t\t 510410017   | \t\t Amberly Hayashi    | \t\t 84     | \t\t 49   | \t\t 79  | \t\t  71.5   | B     |"
               << endl;
        // menulis ke 17
        myfile << "18.   | \t\t 510410018   | \t\t Derick Scholten    | \t\t 53     | \t\t 73   | \t\t 47  | \t\t  56.6   | D     |"
               << endl;
        // menulis ke 18
        myfile << "19.   | \t\t 510410019   | \t\t Monika Partington  | \t\t 37     | \t\t 76   | \t\t 65  | \t\t  59.9   | E     |"
               << endl;
        // menulis ke 19
        myfile << "20.   | \t\t 510410020   | \t\t Denny Pirtle       | \t\t 96     | \t\t 36   | \t\t 46  | \t\t  58     | D     |"
               << endl;
        // menulis ke 20
        myfile << "21.   | \t\t 510410021   | \t\t Ehtel Clutts       | \t\t 97     | \t\t 78   | \t\t 59  | \t\t  76.1   | B     |"
               << endl;

        // menulis ke 21
        myfile << "22.   | \t\t 510410022   | \t\t Chester Delillo    | \t\t 48     | \t\t 93   | \t\t 77  | \t\t  73.1   | B     |"
               << endl;
        // menulis ke 22
        myfile << "23.   | \t\t 510410023   | \t\t Milly Province     | \t\t 50     | \t\t 69   | \t\t 49  | \t\t  55.3   | D     |"
               << endl;
        // menulis ke 23
        myfile << "24.   | \t\t 510410024   | \t\t Hsiu Heady         | \t\t 65     | \t\t 70   | \t\t 60  | \t\t  64.5   | C     |"
               << endl;
        // menulis ke 24
        myfile << "25.   | \t\t 510410025   | \t\t Shemeka Mccowan    | \t\t 79     | \t\t 45   | \t\t 36  | \t\t  51.6   | D     |"
               << endl;
        // menulis ke 25
        myfile << "26.   | \t\t 510410026   | \t\t Tuan Bartling      | \t\t 42     | \t\t 88   | \t\t 50  | \t\t  59     | D     |"
               << endl;
        // menulis ke 26
        myfile
               << "27.   | \t\t 510410027   | \t\t Iona Read          | \t\t 67     | \t\t 59   | \t\t 58  | \t\t  61     | C     |"
               << endl;
        // menulis ke 27
        myfile << "28.   | \t\t 510410028   | \t\t Joie Neyman        | \t\t 84     | \t\t 50   | \t\t 37  | \t\t  55     | D     |"
               << endl;
        // menulis ke 28
        myfile << "29.   | \t\t 510410029   | \t\t Laurine Brookover  | \t\t 44     | \t\t 52   | \t\t 50  | \t\t  48.8   | E     |"
               << endl;
        // menulis ke 29
        myfile << "30.   | \t\t 510410030   | \t\t Rosie Najera       | \t\t 49     | \t\t 55   | \t\t 50  | \t\t  51.2   | D     |"
               << endl;
        // menulis ke 30
        myfile << "31.   | \t\t 510410031   | \t\t Cristie Caffrey    | \t\t 75     | \t\t 70   | \t\t 88  | \t\t  78.7   | B     |"
               << endl;
        // menulis ke 31
        myfile << "32.   | \t\t 510410032   | \t\t Nubia Behan        | \t\t 96     | \t\t 46   | \t\t 44  | \t\t  60.2   | C     |"
               << endl;
        // menulis ke 32
        myfile << "33.   | \t\t 510410033   | \t\t Mitzie Tingle      | \t\t 97     | \t\t 42   | \t\t 46  | \t\t  60.1   | C     |"
               << endl;
        // menulis ke 33
        // menulis penutup
       myfile << "------------------------------------------------------------------------------"
               << endl;
        myfile.close(); // menutup file

        cout << "Text telah ditulis ke dalam File" << endl;
    }
    else
    {
        cout << "File tidak ditemukan" << endl;
    }

    _getche();
    return EXIT_SUCCESS;
}