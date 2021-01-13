/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

class Date{
 public:
  Date(int day, int month, int year){day_ = day; month_ = month; year_ = year;}
  void Print();
  void IsLeapYear();
  int GetYear() { return year_; }
  int GetMonth() { return month_; }
  int GetDay() { return day_; }
  void SetDate(int day, int month, int year){day_ = day; month_ = month; year_ = year;}
  friend bool operator< (const Date &d1, const Date &d2);
  friend bool operator> (const Date &d1, const Date &d2);
  friend bool operator== (const Date &d1, const Date &d2);
  friend std::ostream& operator<<(std::ostream &out, const Date &date);
  bool IsLeapYear(Date date);

 private:
  int day_;
  int month_;
  int year_;
};

