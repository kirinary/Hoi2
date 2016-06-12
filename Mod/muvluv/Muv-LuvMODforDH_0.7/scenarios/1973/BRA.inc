
##############################
# Country definition for BRA #
##############################

province =
{ id       = 826
  air_base = { size = 1 current_size = 1 }
}            # レシフェ
province = { id = 847 anti_air = 1 ic = 3 } # クリチバ
province =
{ id         = 848
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  ic         = 2
}              # ポルト・アレグレ
province =
{ id         = 877
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}              # ベレン
province =
{ id       = 880
  air_base = { size = 1 current_size = 1 }
  ic       = 2
}            # フォルタレーザ
province =
{ id         = 881
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
  ic         = 4
}              # ナタール
province =
{ id         = 882
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 2
}              # サルバドール
province = { id = 883 ic = 1 } # ゴイアス
province =
{ id            = 885
  anti_air      = 2
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 6 current_size = 6 }
  ic            = 8
}                 # リオデジャネイロ
province =
{ id       = 886
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  ic       = 6
}            # サンパウロ
province = { id = 887 anti_air = 1 } # ベロ・オリゾンテ

#####################
# Country main data #
#####################

country =
{ tag                 = BRA
  energy              = 5000
  metal               = 5000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 80000
  manpower            = 156
  transports          = 24
  escorts             = 6
  capital             = 885
  transports          = 50
  escorts             = 20
  money               = 350
  regular_id = U08
  nationalprovinces   = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  ownedprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  controlledprovinces = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy              = { democratic = 3 political_left = 4 freedom = 3 free_market = 7 professional_army = 6 defense_lobby = 7 interventionism = 6 }
}
