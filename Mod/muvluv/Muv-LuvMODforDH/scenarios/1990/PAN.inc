
##############################
# Country definition for PAN #
##############################

province =
{ id         = 888
  anti_air   = 2
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 4
}              # �p�i�}�s

#####################
# Country main data #
#####################

country =
{ tag                 = PAN
  manpower            = 50
  energy              = 100
  metal               = 50
  rare_materials      = 25
  oil                 = 50
  supplies            = 200
  money               = 100
  capital             = 888
  regular_id          = U09

  nationalprovinces   = { 723 888 }
  ownedprovinces      = { 723 888 }
  controlledprovinces = { 723 888 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  landunit =
  { id       = { type = 16001 id = 6089 }
    name     = "��1�R�c"
    location = 888
    home     = 888
    mission  = { type = none target = 888 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 16001 id = 6091 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 16001 id = 6092 }
    name     = "��2�R�c"
    location = 888
    home     = 888
    mission  = { type = none target = 888 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 16001 id = 6094 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 16002 id = 6095 }
    name     = "��3���"
    location = 888
    home     = 888
    base     = 888
    division =
    { id       = { type = 16002 id = 6097 }
      name     = "��1�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
