/**
 * @file bank.h
 * @author Harshit Singh
 * @brief HeaderFile Includes all functions prototype and some of global variable declaration and structures
 * @version 0
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __BANK_H
#define __BANK_H

extern int prog_exit;

struct date
{
  int month, day, year;
};

struct
{
  char name[20];
  int acc_no, age;
  char address[60];
  char citizenship[15];
  double phone;
  char acc_type[10];
  float amount;
  int type;
  struct date dob;
  struct date deposit;
  struct date withdraw;

} add, update, check, removeAccn, transaction;

int menu(void);
int view_list();
void new_account();
void changeDetails(void);
void transact(void);
void erase(void);
void viewUserDetails(void);
void closeProg(void);
int delayProg(int j);
float calculateInterest(float time, float amount, int rate);

#endif