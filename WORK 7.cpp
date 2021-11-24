#include <iostream>
using namespace std;
void shark2(char sumbol, int value, int menu1) {

	for (int me = 1; me <= (value - 1); me++) {
		cout << " " << sumbol;
	}
	for (int me = 1; me <= (value - 2); me++) {
		cout << " " << sumbol;

		for (int me = 1; me <= (value - 2); me++) {
			cout << "  ";


		}
		cout << " " << sumbol << endl;

	}
	for (int me = 1; me <= (value - 0); me++) {
		cout << " " << sumbol;
	}


	cout << "\n";
}
void shark(char sumbol, int value, int menu1) {

	for (int me = 1; me <= value; me++) {
		cout << " " << sumbol;
	}
	cout << "\n";
}
int main() {
	setlocale(0, "");
	cout << "Введите символ: ";
	char sumbol;
	int menu;
	int value;

	cin >> sumbol;
	system("cls");
	cout << "Введите количество знаков: ";
	cin >> value;
	system("cls");
	int menu1 = value;
	cout << "[1] Заполненный" << endl;
	cout << "[2] Пустой" << endl;
	cout << "Выберите вариант квадрата: ";
	cin >> menu;
	if (menu == 1) {
		shark(sumbol, value, menu1);
		menu1 = menu1 - 1;
		if (menu1 > 0) {
			shark(sumbol, value, menu1);
			menu1 = menu1 - 1;
			if (menu1 > 0) {
				shark(sumbol, value, menu1);
				menu1 = menu1 - 1;
				if (menu1 > 0) {
					shark(sumbol, value, menu1);
					menu1 = menu1 - 1;
					if (menu1 > 0) {
						shark(sumbol, value, menu1);
						menu1 = menu1 - 1;
						if (menu1 > 0) {
							shark(sumbol, value, menu1);
							menu1 = menu1 - 1;
							if (menu1 > 0) {
								shark(sumbol, value, menu1);
								menu1 = menu1 - 1;
								if (menu1 > 0) {
									shark(sumbol, value, menu1);
									menu1 = menu1 - 1;
									if (menu1 > 0) {
										shark(sumbol, value, menu1);
										menu1 = menu1 - 1;
										if (menu1 > 0) {
											shark(sumbol, value, menu1);
											menu1 = menu1 - 1;
											if (menu1 > 0) {
												shark(sumbol, value, menu1);
												menu1 = menu1 - 1;
												if (menu1 > 0) {
													shark(sumbol, value, menu1);
													menu1 = menu1 - 1;
													if (menu1 > 0) {
														shark(sumbol, value, menu1);
														menu1 = menu1 - 1;
														if (menu1 > 0) {
															shark(sumbol, value, menu1);
															menu1 = menu1 - 1;
															if (menu1 > 0) {
																shark(sumbol, value, menu1);
																menu1 = menu1 - 1;
																if (menu1 > 0) {
																	shark(sumbol, value, menu1);
																	menu1 = menu1 - 1;
																	if (menu1 > 0) {
																		shark(sumbol, value, menu1);
																		menu1 = menu1 - 1;
																		if (menu1 > 0) {
																			shark(sumbol, value, menu1);
																			menu1 = menu1 - 1;
																			if (menu1 > 0) {
																				shark(sumbol, value, menu1);
																				menu1 = menu1 - 1;
																				if (menu1 > 0) {
																					shark(sumbol, value, menu1);
																					menu1 = menu1 - 1;
																					if (menu1 > 0) {
																						shark(sumbol, value, menu1);
																						menu1 = menu1 - 1;
																						if (menu1 > 0) {
																							shark(sumbol, value, menu1);
																							menu1 = menu1 - 1;
																							if (menu1 > 0) {
																								shark(sumbol, value, menu1);
																								menu1 = menu1 - 1;
																								if (menu1 > 0) {
																									shark(sumbol, value, menu1);
																									menu1 = menu1 - 1;
																									if (menu1 > 0) {
																										shark(sumbol, value, menu1);
																										menu1 = menu1 - 1;
																										if (menu1 > 0) {
																											shark(sumbol, value, menu1);
																											menu1 = menu1 - 1;
																											if (menu1 > 0) {
																												shark(sumbol, value, menu1);
																												menu1 = menu1 - 1;
																												if (menu1 > 0) {
																													shark(sumbol, value, menu1);
																													menu1 = menu1 - 1;
																													if (menu1 > 0) {
																														shark(sumbol, value, menu1);
																														menu1 = menu1 - 1;
																														if (menu1 > 0) {
																															shark(sumbol, value, menu1);
																															menu1 = menu1 - 1;
																															if (menu1 > 0) {
																																shark(sumbol, value, menu1);
																																menu1 = menu1 - 1;
																																if (menu1 > 0) {
																																	shark(sumbol, value, menu1);
																																	menu1 = menu1 - 1;
																																	if (menu1 > 0) {
																																		shark(sumbol, value, menu1);
																																		menu1 = menu1 - 1;
																																		if (menu1 > 0) {
																																			shark(sumbol, value, menu1);
																																			menu1 = menu1 - 1;
																																			if (menu1 > 0) {
																																				shark(sumbol, value, menu1);
																																				menu1 = menu1 - 1;
																																				if (menu1 > 0) {
																																					shark(sumbol, value, menu1);
																																					menu1 = menu1 - 1;
																																					if (menu1 > 0) {
																																						shark(sumbol, value, menu1);
																																						menu1 = menu1 - 1;
																																						if (menu1 > 0) {
																																							shark(sumbol, value, menu1);
																																							menu1 = menu1 - 1;
																																							if (menu1 > 0) {
																																								shark(sumbol, value, menu1);
																																								menu1 = menu1 - 1;
																																								if (menu1 > 0) {
																																									shark(sumbol, value, menu1);
																																									menu1 = menu1 - 1;
																																									if (menu1 > 0) {
																																										shark(sumbol, value, menu1);
																																										menu1 = menu1 - 1;
																																										if (menu1 > 0) {
																																											shark(sumbol, value, menu1);
																																											menu1 = menu1 - 1;
																																											if (menu1 > 0) {
																																												shark(sumbol, value, menu1);
																																												menu1 = menu1 - 1;
																																												if (menu1 > 0) {
																																													shark(sumbol, value, menu1);
																																													menu1 = menu1 - 1;
																																													if (menu1 > 0) {
																																														shark(sumbol, value, menu1);
																																														menu1 = menu1 - 1;
																																													}
																																													else {
																																														system("pause");
																																													}
																																												}
																																												else {
																																													system("pause");
																																												}
																																											}
																																											else {
																																												system("pause");
																																											}
																																										}
																																										else {
																																											system("pause");
																																										}
																																									}
																																									else {
																																										system("pause");
																																									}
																																								}
																																								else {
																																									system("pause");
																																								}
																																							}
																																							else {
																																								system("pause");
																																							}
																																						}
																																						else {
																																							system("pause");
																																						}
																																					}
																																					else {
																																						system("pause");
																																					}
																																				}
																																				else {
																																					system("pause");
																																				}
																																			}
																																			else {
																																				system("pause");
																																			}
																																		}
																																		else {
																																			system("pause");
																																		}
																																	}
																																	else {
																																		system("pause");
																																	}
																																}
																																else {
																																	system("pause");
																																}
																															}
																															else {
																																system("pause");
																															}
																														}
																														else {
																															system("pause");
																														}
																													}
																													else {
																														system("pause");
																													}
																												}
																												else {
																													system("pause");
																												}
																											}
																											else {
																												system("pause");
																											}
																										}
																										else {
																											system("pause");
																										}
																									}
																									else {
																										system("pause");
																									}
																								}
																								else {
																									system("pause");
																								}
																							}
																							else {
																								system("pause");
																							}
																						}
																						else {
																							system("pause");
																						}
																					}
																					else {
																						system("pause");
																					}
																				}
																				else {
																					system("pause");
																				}
																			}
																			else {
																				system("pause");
																			}
																		}
																		else {
																			system("pause");
																		}
																	}
																	else {
																		system("pause");
																	}
																}
																else {
																	system("pause");
																}
															}
															else {
																system("pause");
															}
														}
														else {
															system("pause");
														}
													}
													else {
														system("pause");
													}
												}
												else {
													system("pause");
												}
											}
											else {
												system("pause");
											}
										}
										else {
											system("pause");
										}
									}
									else {
										system("pause");
									}
								}
								else {
									system("pause");
								}
							}
							else {
								system("pause");
							}
						}
						else {
							system("pause");
						}
					}
					else {
						system("pause");
					}
				}
				else {
					system("pause");
				}
			}
			else {
				system("pause");
			}
		}
		else {
			system("pause");
		}
	}
	else if (menu == 2) {
		shark2(sumbol, value, menu1);





	}
	else {

		cout << "ошибка";


	}

}