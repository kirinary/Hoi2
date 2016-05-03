
##############################
# Country definition for CUB #
##############################

province =
{ id         = 654
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
  ic         = 4
}              # サン・クリストバル・デ・ラ・ハバナ
province =
{ id            = 656
  air_base      = { size = 1 current_size = 1 }
}                 # カマグエイ
province =
{ id         = 657
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}              # サンチアゴ・デ・クーバ

#####################
# Country main data #
#####################

country =
{ tag                 = CUB
  energy              = 500
  metal               = 500
  rare_materials      = 2000
  oil                 = 200
  supplies            = 200
  manpower            = 14
  transports          = 15
  escorts             = 3
  capital             = 654
  regular_id          = U09

  money               = 500
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  ownedprovinces      = { 654 655 656 657 }
  controlledprovinces = { 654 655 656 657 }
  techapps            = { 7010 }
  nationalprovinces   = { 654 655 656 657 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  landunit =
  { id       = { type = 7001 id = 7116 }
    name     = "第1軍団"
    location = 654
    home     = 654
    division =
    { id            = { type = 7001 id = 7118 }
      name          = "第1自走支援担保師団"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 7001 id = 7119 }
    name     = "第2軍団"
    location = 654
    home     = 654
    division =
    { id            = { type = 7001 id = 7121 }
      name          = "第1機械化歩兵師団"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 7002 id = 7122 }
    name     = "第1戦隊"
    location = 654
    home     = 654
    base     = 654
    division =
    { id       = { type = 7002 id = 7124 }
      name     = "第1ミサイル艇師団"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
