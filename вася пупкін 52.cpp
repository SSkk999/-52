using namespace std;
#include <iostream>

//void task1(int s) {
//
//    int* ss = new int[s];
//
//
//
//}
//void task2(int ss,int* aa,int sd) {
//    for (int i = 0; i < ss; i++)
//    {
//        aa[i] = sd;
//    }
//
//    for (int i = 0; i < ss; i++)
//    {
//        cout << "sd:" << aa[i] << endl;
//    }
//    delete[] aa;
//
//
//}
//void task3(int ss, int* aa) {
//
//
//    for (int i = 0; i < ss; i++)
//    {
//        cout <<"sd:" << aa[i] << endl;
//    }
//    delete[] aa;
//
//
//}
//void task4(int ss, int* aa) {
//    delete [] aa;
//
//
//
//}
//void task5(int ss, int* aa,int sw) {
//    int* sk = new int[ss + 1];
//
//
//    for (int i = 0; i < ss; i++)
//    {
//        sk[i] = aa[i];
//    }
//    sk[ss] = sw;
//    for (int i = 0; i < ss + 1; i++)
//    {
//        {
//            cout << "sd:" << sk[i] << endl;
//        }
//    }
//
//    delete[] aa;
//    delete[] sk;
//}
//void task6(int ss, int* aa, int sw,int s) {
//
//   
//
//
//    for (int i = 0; i < ss; i++)
//    {
//        if (i == s - 1)
//        {
//            aa[i] = sw;
//        }
//    }
//    for (int i = 0; i < ss; i++)
//    {
//        {
//            cout << "sd:" << aa[i] << endl;
//        }
//    }
//
//
//}
//void task7(int ss, int* aa, int sw, int s) {
//
//    for (int i = 0; i < ss; i++)
//    {
//        {
//            if (i == s - 1)
//            {
//                continue;
//            }
//            cout << "sd:" << aa[i] << endl;
//        }
//    }
//
//
//}
//void task22(int ss, int* aa)
//{
//    int ds = 0;
//    int* shereder = new int[ss];
//    for (int i = 0; i < ss; i++)
//    {
//        
//               if (i != 0 && aa[i] % i == 0)
//            {
//                continue;
//            }
//            else {
//                shereder[ds] = aa[i];
//                ds++;
//            }
//     }
//    for (int i = 0; i < ds; i++)
//    {
//        cout << "mas:" << shereder[i] << endl;
//    }
//    cout << "pokashuk:" << ds;
//    delete[] shereder;
//}
void task33(int ss, int* aa)
{
    int ds = 0;
    int min = 0;
    int mi0 = 0;
    int* shereder = new int[ss];
    int* shereder2 = new int[ss];
    int* shereder3 = new int[ss];
   
    for (int i = 0; i < ss; i++)
    {

        if (aa[i] > 0)
        {
            shereder3[ds] = aa[i];
            ds++;
        }
        else if (aa[i] < 0)
        {
            shereder2[min] = aa[i];
            min++;
        }
        else {
            shereder[mi0] = aa[i];
            mi0++;
        }
    }

    cout << "+:" << ds << endl;
    cout << "-:" << min << endl;
    cout << "0:" << mi0 << endl;
    cout << endl;
    for (int i = 0; i < ds; i++)
    {
        cout << "+:" << shereder3[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < min; i++)
    {
        cout << "-:" << shereder2[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < mi0; i++)
    {
        cout << "0:" << shereder[i] << endl;
    }
    cout << endl;

    delete[] shereder;
    delete[] shereder2;
    delete[] shereder3;
}

int main()
{
    /////////111111111111111111111111111111111
    //int size = 0;
    //cin >> size;
    //task1(size);
  ///////////////////////////////////
    //int ww = 0;
    //int size = 0;
    //cin >> size;
    //int* ssd = new int[size];
    //task2(size, ssd,ww);
  /////////////////////////////////////////////////
  //int size = 0;
  //  cin >> size;
  //  int* ssd = new int[size];
  //  for (int i = 0; i < size; i++)
  //  {
  //      cin >> ssd[i];
  //  }
  //  task3(size,ssd);
//////////////////////////////////////////////////////////////////
    //int ww = 0;
    //int size = 0;
    //cin >> size;
    //int* ssd = new int[size];
    //task4(size, ssd);
 //////////////////////////////////////////////////////////////////////////////////////////
  //  int ww = 0;
  //  cout << "enter element";
  //  cin >> ww;
  //  int size = 0;
  //  cout << "enter size";
  //  cin >> size;
  //  int* ssd = new int[size];
  //    for (int i = 0; i < size; i++)
  //{
  //    cin >> ssd[i];
  //}
  //  task5(size, ssd,ww);
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //int ww = 0;
    //int dodavan = 0;
    //cout << "enter element";
    //cin >> ww;
    //int size = 0;
    //cout << "enter size";
    //cin >> size;
    //cout << "enter place";
    //cin >> dodavan;
    //int* ssd = new int[size];
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "mas:" << endl;
    //    cin >> ssd[i];
    //}
    //task6(size, ssd, ww, dodavan);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    //int ww = 0;
    //int dodavan = 0;
    //int size = 0;
    //cout << "enter size";
    //cin >> size;
    //int* ssd = new int[size];
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "mas:" << endl;
    //    cin >> ssd[i];
    //}
    //cout << "enter place";
    //cin >> dodavan;
    //task7(size, ssd, ww, dodavan);
    ////////////////////////////////////////////2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
    int ww = 0;
    int dodavan = 0;
    int size = 0;
    cout << "enter size";
    cin >> size;
    int* ssd = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "mas:" << endl;
        cin >> ssd[i];
    }
    task33(size, ssd);

    delete[] ssd;

}


