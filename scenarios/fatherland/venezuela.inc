##############################
# Country definition for VEN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = VEN
  name               = "Republic of Venezuela"
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 } }
  capital            = 1993 # Caracas
  manpower           = 40
  # Resource Reserves
  energy         = 3500
  metal          = 3500
  rare_materials = 250
  oil            = 3500
  supplies       = 350
  money          = 0

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 1988 1989 1992 1993 1995 1996 }
  ownedprovinces         = { 1988 1989 1992 1993 1995 1996 }
  controlledprovinces    = { 1988 1989 1992 1993 1995 1996 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1910 1930 1940 1950 1960 1970 1980 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2130 2150 2160 2170 2180 2220 2230 2240 2260 2290 2300 2310 2320 2330 2340 2370 2400 2410 2420 2430 2450 2460 2470 2480 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4200 4220 4230 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5466 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6200 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7560 7570 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9350 12000 12010 12020 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 14040 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81850 81860 81870 81880 81890 81900 82300 82310 82320 82330 82500 82510 82520 1080 1920 }
  inventions             = { 3000011 3000012 3000018 3000027 3000028 3000031 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 5
    free_market       = 7
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 180079 } # Carlos Delgado Chalbaud
  headofgovernment       = { type = 9 id = 180203 } # Carlos Delgado Chalbaud
  foreignminister        = { type = 9 id = 180084 } # German Suarez Flamerich
  armamentminister       = { type = 9 id = 180024 } # Julio Garcia Jarpa
  ministerofsecurity     = { type = 9 id = 180035 } # Isidoro Ruiz Tuerro
  ministerofintelligence = { type = 9 id = 180041 } # Robert Letts Sanchez
  chiefofstaff           = { type = 9 id = 180045 } # Gustavo Gonzalez Lopez
  chiefofarmy            = { type = 9 id = 180086 } # Marcos Perez Jimenez
  chiefofnavy            = { type = 9 id = 180054 } # Carlos Ramos D?z
  chiefofair             = { type = 9 id = 180058 } # Miguel D?z Fraile
  dormant_ministers      = { 180061 180001 180002 180003 180004 180005 180019 180026 180027 180028 180006 180036 180043 180009 180056 180010 }

  landunit = {
    id       = { type = 10277 id = 1 }
    name     = "Venezuelan Army"
    location = 1993
    division = {
      id             = { type = 10277 id = 2 }
      name           = "1a Divisi? de Infanter?"
      type           = infantry
      model          = 11
      strength       = 100
    }
    division = {
      id             = { type = 10277 id = 3 }
      name           = "2a Divisi? de Infanter?"
      type           = infantry
      model          = 11
      strength       = 100
    }
  }
}
