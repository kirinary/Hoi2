
##############################
# Country definition for CAN #
##############################

province =
{ id       = 541
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}            # ヴァンクーヴァー
province =
{ id         = 556
  anti_air   = 2
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # ヴィクトリア
province =
{ id       = 569
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # ウィニペグ
province =
{ id         = 574
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # ケベックシティ
province =
{ id         = 576
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # セントジョン
province =
{ id         = 579
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # ハリファックス
province =
{ id            = 585
  anti_air      = 2
  air_base      = { size = 2 current_size = 2 }
}                 # モントリオール
province =
{ id            = 588
  anti_air      = 3
  air_base      = { size = 2 current_size = 2 }
}                 # オタワ
province =
{ id       = 797
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # カルガリー

#####################
# Country main data #
#####################

country =
{ tag                 = CAN
  energy              = 5000
  metal               = 5000
  rare_materials      = 5000
  oil                 = 3000
  supplies            = 80000
  transports          = 115
  escorts             = 36
  manpower            = 110
  capital             = 588
  regular_id          = U06
  money               = 350
  nationalprovinces   = { 1909 541 552 554 555 556 558 560 564 565 566 569 571 574 575 576 578 579 580 585 588 589 590 796 797 798 799 }
  ownedprovinces      = { 1909 541 552 554 555 556 558 560 564 565 566 569 571 574 575 576 578 579 580 585 588 589 590 796 797 798 799 }
  controlledprovinces = { 1909 541 552 554 555 556 558 560 564 565 566 569 571 574 575 576 578 579 580 585 588 589 590 796 797 798 799 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
}
