
##############################
# Country definition for MEX #
##############################

province =
{ id       = 738
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}            # グアダラハラ
province = { id = 741 ic = 2 } # プエブラ
province =
{ id       = 745
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
}            # モンレテー
province = { id = 747 ic = 2 } # レオン
province =
{ id         = 751
  anti_air   = 3
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 2
}              # アカプルコ
province =
{ id       = 752
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  ic       = 6
}            # メキシコシティ
province =
{ id            = 753
  anti_air      = 1
  air_base      = { size = 2 current_size = 2 }
  naval_base    = { size = 2 current_size = 2 }
  ic            = 2
}                 # ベラクルス
province = { id = 755 ic = 1 } # トゥストラ・グティエレス

#####################
# Country main data #
#####################

country =
{ tag                 = MEX
  energy              = 1000
  metal               = 500
  rare_materials      = 200
  oil                 = 500
  supplies            = 500
  manpower            = 62
  transports          = 24
  escorts             = 4
  capital             = 752
  regular_id          = U09
  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  ownedprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
}
