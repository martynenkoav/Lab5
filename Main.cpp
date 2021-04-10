

#include <iostream>
#include <time.h>
#include "IBank.h"
#include "Sberbank.h"
#include "Debit_account.h"
#include "Deposit.h"
#include "ClientBuilder.h"
#include "Transaction.h"
#include "Banks.h"
#include "Credit_account.h"
#include "BankSPb.h"
int main()
{
    try {
     
        Sberbank sberbank;
        BankSPb bankspb;
        Banks mem;
        mem.add(sberbank);
        Debit_account one(200, 1234);
        Credit_account two(300, 4445);
        Client new_client;
        ClientBuilder builder;
        Client vanya;
        new_client = builder.Set_name("Masha")->Set_second_name("Iv")->Build();
        vanya= builder.Set_name("Vanya")->Set_second_name("Iv")->Build();
    //    std::cout << vanya.Get_name() << "\n";
//
        Deposit f(200, 9878);
        sberbank.Add(one, new_client);
        mem.bills.insert(std::make_pair(one.ID, one));
        mem.bills.insert(std::make_pair(two.ID, two));
        mem.add(bankspb);
        bankspb.Add(two, vanya);
        sberbank.Show();
     //   std::cout << mem.banklist.begin()->name << "\n";
        Transaction first(100, 1, 1234, 0, sberbank);
      //  std::cout << first.my_ID << "\n";
        first.Trans(mem);
        //two.trans(10, 1234, sberbank);
         sberbank.Show();
    }
    catch (std::exception& err) {
        std::cout << err.what() << "\n";
        return EXIT_FAILURE;
    };
}

