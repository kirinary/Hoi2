
##############################
# Country definition for ARG #
##############################

province = { id = 667 ic = 4 } # ラプラタ
province = { id = 843 ic = 2 } # サルタ
province =
{ id       = 844
  air_base = { size = 2 current_size = 2 }
}            # レシステンシア
province = { id = 850 ic = 3 } # コリエンテス
province =
{ id         = 851
  ic         = 8
  anti_air   = 5
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # ブエノスアイレス
province =
{ id            = 852
  air_base      = { size = 2 current_size = 2 }
}                 # コルドバ
province = { id = 853 ic = 3 } # サン・ミゲル・デ・トゥクマン
province =
{ id         = 857
  ic         = 3
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 4 current_size = 4 }
}              # マル・デル・プラタ
province = { id = 858 ic = 2 } # リオ・ガジェーゴス
province =
{ id         = 859
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # コモドロ・リバダビア

#####################
# Country main data #
#####################

country =
{ tag                 = ARG
  manpower            = 50
  transports          = 54
  escorts             = 18
  energy              = 5000
  metal               = 5000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 80000
  capital             = 851
  money               = 350
    regular_id = U08
  nationalprovinces   = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 850 866 }
  ownedprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 850 }
  controlledprovinces = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 850 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy              = { democratic = 8 political_left = 4 freedom = 8 free_market = 7 professional_army = 3 defense_lobby = 6 interventionism = 3 }
}
