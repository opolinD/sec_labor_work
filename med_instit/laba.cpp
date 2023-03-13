#include<iostream>
class recept {
	std::string name_of_drug;//имя лекарства
	int single_dosage;//единичная дозировка
	int intakes_per_day;//количество приемов в день
	float cost;//цена
	int srok;//срок действия
	date expir_date;//дата окончания
	date issuance_date;//дата выписки рецепта
	std::string type_of_prescription;//тип рецепта
	FIO patient, doctor;//фио пациента и доктора
	std::string adress, name_of_hospital, phone_num;//адресс больницы, название, номер

public:
	recept();
	recept(std::string _n_o_d,int _s_d,int _i_p_d,float _c,int _s,date _e_d,date _i_d,std::string _t_o_p,FIO _p, FIO _d,std::string _adress, std::string _p_n, std::string _n_o_h) :
		name_of_drug(_n_o_d), 
		single_dosage(_s_d),
		intakes_per_day(_i_p_d),
		cost(_c),
		srok(_s),
		expir_date(_e_d),
		issuance_date(_i_d),
		type_of_prescription(_t_o_p),
		patient(_p),
		doctor(_d),
		adress(_adress),
		name_of_hospital(_n_o_h),
		phone_num(_p_n)
	{}
	recept(const recept& a) :
		name_of_drug(a.name_of_drug),
		single_dosage(a.single_dosage),
		intakes_per_day(a.intakes_per_day),
		cost(a.cost),
		srok(a.srok),
		expir_date(a.expir_date),
		issuance_date(a.issuance_date),
		type_of_prescription(a.type_of_prescription),
		patient(a.patient),
		doctor(a.doctor),
		adress(a.adress),
		name_of_hospital(a.name_of_hospital),
		phone_num(a.phone_num)
	{}
};
class date {
	int day, month, year;
public:
	date();
	date(int _day = 0, int _month = 0,int _year = 0):day(_day), month(_month), year(_year){}
	date(const date& a):day(a.day), month(a.month), year(a.month){}
};
class FIO {
	std::string name, surname, lastname;
public:
	FIO();
	FIO(std::string _name, std::string _surname, std::string _lastname):
		name(_name = "no_name"), surname(_surname = "no_surname"), lastname(_lastname = "no_lastname") {}
	FIO(const FIO& a):name(a.name), surname(a.surname), lastname(a.lastname) {}
};
int main() {
	return 0;
}