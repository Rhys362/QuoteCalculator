#include <iostream>

using namespace std;

int main()
{
    int hours;
    float materials, parking, total;

    int rate;
    cout << "Welcome to the LPC Quotation calculator! "  << endl;
    cin.get();
    cout << "First of all, tell me what kind of job this is. " << endl;
    cout << "\t >>  Press '1' for heating" <<endl;
    cout << "\t >>  Press '2' for plumbing " <<endl;
    cout << "\t >>  Press '3' for electrical " <<endl;
    cout << "\t >>  &  Press '4' for carpentry " <<endl;
    retry:
    cout << "\nEnter your choice ";
    cin >> rate;
    if(rate == 1)
    {
    cout << "Enter the number of hours required to complete this job "<<endl;
    cin >> hours;
    cout << "Enter the cost of any materials "<<endl;
    cin >> materials;
    cout << "Enter additional costs such as parking & congestion "<<endl;
    cin >> parking;
    int commissionRate;
    cout << "Select client commission rate " <<endl;
    cout <<"\t>> Enter '1' for 11% "<<endl;
    cout <<"\t>> Enter '2' for 25% "<<endl;
    cout <<"\t>> Enter '3' if there is no commission "<<endl;
    cin >> commissionRate;
    switch (commissionRate)
    {
    case 1:
    total = (hours * 80) + materials + parking;
    commissionRate = total * 11 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 2:
    total = (hours * 80) + materials + parking;
    commissionRate = total * 25 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 3:
    total = (hours * 80) + materials + parking;
    cout << "\nThe total cost is: £" <<total;
    }


}
    else if(rate == 2)
    {
    cout << "Enter the number of hours required to complete this job "<<endl;
    cin >> hours;
    cout << "Enter the cost of any materials "<<endl;
    cin >> materials;
    cout << "Enter additional costs such as parking & congestion "<<endl;
    cin >> parking;
    int commissionRate;
    cout << "Select client commission rate " <<endl;
    cout <<"\t>> Enter '1' for 11% "<<endl;
    cout <<"\t>> Enter '2' for 25% "<<endl;
    cout <<"\t>> Enter '3' if there is no commission "<<endl;
    cin >> commissionRate;
    switch (commissionRate)
    {
    case 1:
    total = (hours * 70) + materials + parking;
    commissionRate = total * 11 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 2:
    total = (hours * 70) + materials + parking;
    commissionRate = total * 25 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 3:
    total = (hours * 70) + materials + parking;
    cout << "\nThe total cost is: £" <<total;
    }
}

    else if(rate == 3)
    {
    cout << "Enter the number of hours required to complete this job "<<endl;
    cin >> hours;
    cout << "Enter the cost of any materials "<<endl;
    cin >> materials;
    cout << "Enter additional costs such as parking & congestion "<<endl;
    cin >> parking;
    int commissionRate;
    cout << "Select client commission rate " <<endl;
    cout <<"\t>> Enter '1' for 11% "<<endl;
    cout <<"\t>> Enter '2' for 25% "<<endl;
    cout <<"\t>> Enter '3' if there is no commission "<<endl;
    cin >> commissionRate;
    switch (commissionRate)
    {
    case 1:
    total = (hours * 70) + materials + parking;
    commissionRate = total * 11 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 2:
    total = (hours * 70) + materials + parking;
    commissionRate = total * 25 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 3:
    total = (hours * 70) + materials + parking;
    cout << "\nThe total cost is: £" <<total;
    }
    }
    else if(rate == 4)
    {
    cout << "Enter the number of hours required to complete this job  "<<endl;
    cin >> hours;
    cout << "Enter the cost of any materials "<<endl;
    cin >> materials;
    cout << "Enter additional costs such as parking & congestion "<<endl;
    cin >> parking;
    int commissionRate;
    cout << "Select client commission rate " <<endl;
    cout <<"\t>> Enter '1' for 11% "<<endl;
    cout <<"\t>> Enter '2' for 25% "<<endl;
    cout <<"\t>> Enter '3' if there is no commission "<<endl;
    cin >> commissionRate;
    switch (commissionRate)
    {
    case 1:
    total = (hours * 60) + materials + parking;
    commissionRate = total * 11 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 2:
    total = (hours * 60) + materials + parking;
    commissionRate = total * 25 / 100.0;
    total = total + commissionRate;
    cout << "\nThe total cost is: £" <<total;
    break;
    case 3:
    total = (hours * 60) + materials + parking;
    cout << "\nThe total cost is: £" <<total;
    }
    }
    else
    {
    cout<<"Are you sure? I don't think you meant to enter that, try again!" <<endl;
    goto retry;
    }
    return 0;
    }


