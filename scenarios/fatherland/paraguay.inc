##############################
# Country definition for PAR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = PAR
  name               = "Republic of Paraguay"
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 } }
  capital            = 2047 # Nuestra Senora de la Asuncion
  manpower           = 10
  # Resource Reserves
  energy         = 500
  metal          = 500
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 0

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 2046 2047 }
  ownedprovinces         = { 2046 2047 }
  controlledprovinces    = { 2046 2047 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1310 1320 1330 1340 1350 1360 1370 1830 1840 1850 1910 1920 1930 1940 1950 1960 2010 2020 2030 2040 2050 2070 2080 2090 2100 2110 2120 2150 2160 2170 2180 2220 2230 2240 2260 2290 2300 2310 2320 2330 2340 2370 2400 2410 2420 2430 2450 2460 2470 2480 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4200 4220 4230 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5180 5190 5200 5210 5220 5310 5316 5320 5326 5327 5330 5350 5360 5370 5380 5410 5416 5417 5420 5426 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6150 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7560 7570 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 12000 12010 12020 12060 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 22920 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81850 81860 81870 81880 81890 81900 82300 82310 82320 82330 82500 82510 82520 }
  inventions             = { 3000011 3000012 3000027 3000028 3000031 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 3
    freedom           = 3
    free_market       = 6
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 200073 } # Federico Chaves
  headofgovernment       = { type = 9 id = 200202 } # Federico Chaves
  foreignminister        = { type = 9 id = 200030 } # Cesar Augusto Vasconcellos
  armamentminister       = { type = 9 id = 200077 } # Remigio Bastia Mart?
  ministerofsecurity     = { type = 9 id = 200044 } # Luis de Gasperi
  ministerofintelligence = { type = 9 id = 200076 } # Felipe Molas Lopez
  chiefofstaff           = { type = 9 id = 200054 } # Jos?Lezcano
  chiefofarmy            = { type = 9 id = 200058 } # Amancio Pampliega
  chiefofnavy            = { type = 9 id = 200062 } # Jesus G. Arraza
  chiefofair             = { type = 9 id = 200064 } # H?tor Velasquez
  dormant_ministers      = { 200001 200011 200012 200002 200015 200016 200003 200004 200005 200039 200006 200007 200051 200008 200009 200010 200013 200017 200032 200024 }

  landunit = {
    id       = { type = 10366 id = 1 }
    name     = "Army of Paraguay"
    location = 2046
    division = {
      id             = { type = 10366 id = 2 }
      name           = "Army of Paraguay"
      type           = infantry
      model          = 11
      strength       = 50
    }
  }
}
