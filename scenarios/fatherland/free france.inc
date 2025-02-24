##############################
# Country definition for U01 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U01
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 727 # Algiers
  manpower           = 100
  # Resource Reserves
  energy         = 2000
  metal          = 2000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 150
  escorts        = 25
  free = {
    ic             = 25
    energy         = 60
    metal          = 30
    rare_materials = 15
    oil            = 20
    supplies       = 50
    money          = 10
  }

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CAN value = 150 }
    relation = { tag = SLO value = -200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 200 }
    relation = { tag = HUN value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SCH value = 1 }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPA value = -65 }
    relation = { tag = SWE value = 80 }
    relation = { tag = TUR value = 50 }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation = { tag = NIC value = 150 }
    relation = { tag = LEB value = 50 access = yes }
    relation = { tag = SYR value = 50 access = yes }
    relation = { tag = U03 value = 150 access = yes }
    relation = { tag = ALS value = 200 access = yes }
  }
  SpyInfo                = { country = "U01" NumberOfSpies = 9 }

  nationalprovinces      = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 }
  ownedprovinces         = { 910 922 920 924 925 923 926 909 928 911 914 915 907 908 917 918 919 927 921 1740 1743 1744 2135 2000 1767 1768 1001 1002 996 999 1000 1003 1730 1752 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 743 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 1586 1585 1584 1583 1582 1581 }
  controlledprovinces    = { 910 922 920 924 925 923 926 909 928 911 914 915 907 908 917 918 919 927 921 1740 1743 1744 2135 2000 1767 1768 1001 1002 996 999 1000 1003 1730 1752 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 743 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 1586 1585 1584 1583 1582 1581 }
  claimedprovinces       = { 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 743 740 741 742 744 745 746 747 748 749 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 833 1001 1002 1003 996 999 1000 2000 1752 1767 1768 1730 1740 1743 1744 2135 }

  techapps               = { 2860 2870 2880 2020 2150 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2100 2290 2300 2310 2900 2910 2920 2930 2940 2320 2400 2800 2450 21180 21190 21200 2810 2820 2510 2520 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1396 1560 1570 1580 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 5700 5710 5010 5020 5030 5810 5820 5050 5830 5060 5070 5800 5080 5090 5190 5200 5310 54010 54020 54030 5320 5316 5326 5327 5350 5360 5410 5416 5470 5480 5600 5610 5620 5630 5640 5560 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3410 3420 3430 3440 3450 3456 3460 3470 3480 3510 3520 12100 12110 12120 3610 3620 3630 3640 3650 3660 3310 3320 3330 3340 3720 3730 3736 3740 3750 3900 3810 3820 3830 4500 4510 4520 4530 4540 4550 4010 4020 4030 4400 4170 4600 4610 4620 4630 4120 4130 4140 4300 4310 4320 4330 4340 4050 4740 4750 4760 4770 4780 4790 4800 4810 4820 4700 4710 4190 4900 4910 4920 4250 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6110 6120 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8960 8100 8110 8120 8150 8160 8200 8210 81650 81850 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 10
    free_market       = 8
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 820004 } # Charles de Gaulle
  headofgovernment       = { type = 9 id = 820010 } # Charles de Gaulle
  foreignminister        = { type = 9 id = 820013 } # Georges Bidault
  armamentminister       = { type = 9 id = 820023 } # Andr?Marie
  ministerofsecurity     = { type = 9 id = 820034 } # Paul Ramadier
  ministerofintelligence = { type = 9 id = 820046 } # Charles Luizet
  chiefofstaff           = { type = 9 id = 820055 } # Charles de Gaulle
  chiefofarmy            = { type = 9 id = 820058 } # Jean de Lattre de Tassigny
  chiefofnavy            = { type = 9 id = 820063 } # Etienne Schlumberger
  chiefofair             = { type = 9 id = 820066 } # Martial Val?
  dormant_leaders        = { 820058 820097 820064 }
  dormant_ministers      = { 820091 820092 820093 }
  dormant_teams          = { 820006 820015 820014 820017 }

  landunit = {
    id       = { type = 13500 id = 600 }
    name     = "Troupes de Caledonie Nouvelle"
    location = 1586
    division = {
      id             = { type = 13500 id = 601 }
      name           = "Troupes de Caledonie Nouvelle"
      type           = militia
      model          = 4
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 13500 id = 39 }
    name     = "Troupes de Djibouti"
    location = 833
    division = {
      id             = { type = 13500 id = 40 }
      name           = "Troupes de Djibouti"
      type           = militia
      model          = 4
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 13500 id = 41 }
    name     = "Troupes de Guyanne"
    location = 2000
    division = {
      id             = { type = 13500 id = 42 }
      name           = "Troupes de Guyanne"
      type           = militia
      model          = 4
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 13500 id = 51 }
    name     = "Troupes de Fort de France"
    location = 1768
    division = {
      id             = { type = 13500 id = 52 }
      name           = "Troupes de Fort de France"
      type           = militia
      model          = 4
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 13500 id = 43 }
    name     = "Troupes de Gabon"
    location = 966
    division = {
      id             = { type = 13500 id = 44 }
      name           = "Troupes de Gabon"
      type           = militia
      model          = 4
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 13500 id = 617 }
    name     = "Ière Armée"
    location = 978
    division = {
      id             = { type = 13500 id = 618 }
      name           = "Ière Armée"
      type           = hq
      model          = 2
      strength       = 75
    }
    division = {
      id             = { type = 13500 id = 616 }
      name           = "2ème Division Blindée"
      type           = armor
      model          = 2
      extra          = sp_artillery
      brigade_model  = 0
      strength       = 60
    }
    division = {
      id             = { type = 13500 id = 626 }
      name           = "1ère Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 629 }
      name           = "14ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 608 }
    name     = "IIème Corps d'Armée"
    location = 978
    division = {
      id             = { type = 13500 id = 609 }
      name           = "1ère Division Française Libre"
      type           = motorized
      model          = 1
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 619 }
      name           = "1ère Division Blindée"
      type           = armor
      model          = 1
      extra          = sp_artillery
      brigade_model  = 0
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 611 }
      name           = "3ème Division d'Infanterie Algérienne"
      type           = infantry
      model          = 10
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 620 }
      name           = "9ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 615 }
    name     = "Ière Corps d'Armée"
    location = 978
    division = {
      id             = { type = 13500 id = 614 }
      name           = "2ème Division d'Infanterie Marocaine"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 9
      strength       = 70
    }
    division = {
      id             = { type = 13500 id = 612 }
      name           = "4ème Division Marocaine de Montagne"
      type           = bergsjaeger
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13500 id = 613 }
      name           = "5ème Division Blindée"
      type           = armor
      model          = 1
      extra          = sp_artillery
      brigade_model  = 0
      strength       = 60
    }
    division = {
      id             = { type = 13500 id = 621 }
      name           = "10ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 1002 }
    name     = "Forces Françaises Libres"
    location = 728
    division = {
      id             = { type = 13500 id = 46 }
      name           = "9ème Division d'Infanterie Coloniale"
      type           = infantry
      model          = 9
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 13500 id = 1004 }
    name     = "Forces Françaises Libres"
    location = 978
    division = {
      id             = { type = 13500 id = 625 }
      name           = "27ème Division d'Infanterie Alpine"
      type           = bergsjaeger
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 1005 }
    name     = "Forces Françaises Libres"
    location = 978
    division = {
      id             = { type = 13500 id = 627 }
      name           = "36ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 628 }
    name     = "Forces Françaises Libres"
    location = 978
    division = {
      id             = { type = 13500 id = 630 }
      name           = "10ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 631 }
    name     = "Forces Françaises Libres"
    location = 978
    division = {
      id             = { type = 13500 id = 632 }
      name           = "19ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 633 }
    name     = "Forces Françaises Libres"
    location = 978
    division = {
      id             = { type = 13500 id = 634 }
      name           = "23ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 635 }
    name     = "Forces Françaises Libres"
    location = 978
    division = {
      id             = { type = 13500 id = 636 }
      name           = "25ème Division d'Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13500 id = 49 }
    name     = "Troupes de Madagascar"
    location = 1002
    division = {
      id             = { type = 13500 id = 50 }
      name           = "1ère Division d'Infanterie de Réserve"
      type           = militia
      model          = 4
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 13500 id = 17 }
    name     = "CSTT"
    location = 718
    division = {
      id             = { type = 13500 id = 18 }
      name           = "Commandement Supérieur des Troupes de Tunisie"
      type           = hq
      model          = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 13500 id = 19 }
    name     = "Troupes de Maroc"
    location = 718
    division = {
      id             = { type = 13500 id = 20 }
      name           = "Division de Casablanca"
      type           = infantry
      model          = 8
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 13500 id = 21 }
    name     = "Troupes de Maroc"
    location = 721
    division = {
      id             = { type = 13500 id = 22 }
      name           = "Division de Fez"
      type           = infantry
      model          = 8
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 13500 id = 23 }
    name     = "Troupes de Maroc"
    location = 722
    division = {
      id             = { type = 13500 id = 24 }
      name           = "Division de Marrakech"
      type           = infantry
      model          = 8
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 13500 id = 25 }
    name     = "Troupes de Maroc"
    location = 724
    division = {
      id             = { type = 13500 id = 26 }
      name           = "Division de Meknès"
      type           = infantry
      model          = 8
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 13500 id = 27 }
    name     = "XIX. Région Militaire"
    location = 727
    division = {
      id             = { type = 13500 id = 28 }
      name           = "Division Territoriale d'Alger"
      type           = infantry
      model          = 8
      strength       = 40
    }
    division = {
      id             = { type = 13500 id = 29 }
      name           = "Groupement d'Alger"
      type           = cavalry
      model          = 9
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 13500 id = 30 }
    name     = "XIX. Région Militaire"
    location = 728
    division = {
      id             = { type = 13500 id = 31 }
      name           = "Division Territoriale d'Oran"
      type           = infantry
      model          = 8
      strength       = 40
    }
    division = {
      id             = { type = 13500 id = 32 }
      name           = "Groupement d'Oran"
      type           = cavalry
      model          = 9
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 13500 id = 33 }
    name     = "XIX. Région Militaire"
    location = 735
    division = {
      id             = { type = 13500 id = 34 }
      name           = "Division Territoriale de Constantine"
      type           = infantry
      model          = 8
      strength       = 40
    }
    division = {
      id             = { type = 13500 id = 35 }
      name           = "Groupement de Constantine"
      type           = cavalry
      model          = 9
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 13500 id = 36 }
    name     = "XIX. Région Militaire"
    location = 747
    division = {
      id             = { type = 13500 id = 37 }
      name           = "Division Territoriale de Tunis"
      type           = infantry
      model          = 8
      strength       = 40
    }
    division = {
      id             = { type = 13500 id = 38 }
      name           = "Groupement de Tunis"
      type           = cavalry
      model          = 9
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 13500 id = 45 }
    name     = "Troupes de Afrique"
    location = 978
    division = {
      id             = { type = 13500 id = 47 }
      name           = "2éme Division d'Infanterie Coloniale"
      type           = infantry
      model          = 7
      strength       = 25
    }
    division = {
      id             = { type = 13500 id = 48 }
      name           = "3éme Division d'Infanterie Coloniale"
      type           = infantry
      model          = 7
      strength       = 25
    }
  }

  navalunit = {
    id       = { type = 13500 id = 700 }
    name     = "Force Naval Française Libre"
    location = 23
    base     = 23
    division = {
      id             = { type = 13500 id = 301 }
      name           = "Béarn"
      type           = escort_carrier
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 3110 }
      name           = "Richelieu"
      type           = battleship
      model          = 7
    }
    division = {
      id             = { type = 13500 id = 705 }
      name           = "Lorraine"
      type           = battleship
      model          = 3
      extra1         = naval_anti_air_l
      extra2         = floatplane
      brigade_model2 = 4
    }
    division = {
      id             = { type = 13500 id = 706 }
      name           = "Duguay-Trouin"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 707 }
      name           = "Suffren"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 708 }
      name           = "Duquesne"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 709 }
      name           = "Tourville"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13500 id = 320 }
      name           = "Jeanne d'Arc"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 314 }
      name           = "Emile Bertin"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 330 }
      name           = "George Leygues"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 331 }
      name           = "Gloire"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 332 }
      name           = "Montcalm"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 307 }
      name           = "1ère Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 308 }
      name           = "2ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 321 }
      name           = "3ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 322 }
      name           = "4ème Flottille de Contre-Torpilleurs"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13500 id = 342 }
      name           = "1ère Flottille de Sous-Marins"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 343 }
      name           = "2ème Flottille de Sous-Marins"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 344 }
      name           = "3ème Flottille de Sous-Marins"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 345 }
      name           = "4ème Flottille de Sous-Marins"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 13500 id = 346 }
      name           = "5ème Flottille de Sous-Marins"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 309 }
      name           = "1ère Flottille de Convoi"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 324 }
      name           = "2ème Flottille de Convoi"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 340 }
      name           = "3ème Flottille de Convoi"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 360 }
      name           = "4ème Flottille de Convoi"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 364 }
      name           = "5ème Flottille de Convoi"
      type           = transport
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 13500 id = 800 }
    name     = "Commande Aérienne d'Afrique du Nord"
    location = 727
    base     = 727
    division = {
      id             = { type = 13500 id = 801 }
      name           = "Groupe de Chasse 'Alsace'"
      type           = interceptor
      model          = 6
      strength       = 80
    }
    division = {
      id             = { type = 13500 id = 802 }
      name           = "Groupe de Bombardement Tactique 'Lorraine'"
      type           = tactical_bomber
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 13500 id = 501 }
      name           = "Groupe de Chasse 21"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 13500 id = 503 }
      name           = "Groupe de Bombardement Tactique 1"
      type           = tactical_bomber
      model          = 4
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 13500 id = 803 }
    name     = "Commande Aérienne Caledonie Nouvelle"
    location = 1582
    base     = 1582
    division = {
      id             = { type = 13500 id = 804 }
      name           = "Groupe de Bombardement Naval 1"
      type           = naval_bomber
      model          = 2
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 13500 id = 508 }
    name     = "Commande Aérienne Afrique Ouest"
    location = 978
    base     = 978
    division = {
      id             = { type = 13500 id = 510 }
      name           = "Groupe de Bombardement Naval 2"
      type           = naval_bomber
      model          = 2
      strength       = 20
    }
  }
}
