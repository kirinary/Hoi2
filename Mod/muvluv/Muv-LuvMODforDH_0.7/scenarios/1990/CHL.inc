
##############################
# Country definition for CHL #
##############################

province =
{ id         = 839
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 9
}              # �C�L�P
province = { id = 840 ic = 3 } # �A���g�t�@�K�X�^
province =
{ id         = 856
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  ic         = 4
}              # �o���p���C�\
province =
{ id         = 860
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
  ic         = 2
}              # �T���e�B�A�S
province =
{ id         = 861
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
  ic         = 2
}              # �^���J���m
province =
{ id         = 864
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 2
}              # �e���R

#####################
# Country main data #
#####################

country =
{ tag                 = CHL
  energy              = 1000
  metal               = 1000
  rare_materials      = 1000
  oil                 = 1000
  supplies            = 80000
  manpower            = 15
  transports          = 24
  escorts             = 8
  capital             = 839
  regular_id          = U08

  money               = 350
    regular_id = U08
  nationalprovinces   = { 839 840 842 856 860 861 864 865 }
  ownedprovinces      = { 839 840 842 856 860 861 864 865 }
  controlledprovinces = { 839 840 842 856 860 861 864 865 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  landunit =
  { id       = { type = 5001 id = 6204 }
    name     = "��1�R�c"
    location = 864
    home     = 864
    mission  = { type = none target = 864 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 5001 id = 6206 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 5001 id = 6207 }
    name     = "��2�R�c"
    location = 840
    home     = 840
    mission  = { type = none target = 840 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 5001 id = 6209 }
      name          = "��2�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 5001 id = 6210 }
    name     = "��3�R�c"
    location = 839
    home     = 839
    mission  = { type = none target = 839 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 5001 id = 6212 }
      name          = "��3�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 5001 id = 6213 }
    name     = "��4�R�c"
    location = 839
    home     = 839
    mission  = { type = none target = 839 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 5001 id = 6215 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 5001 id = 6216 }
      name          = "��1������Ԏt�c"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 5002 id = 2395 }
    name     = "��1���"
    location = 856
    home     = 856
    base     = 856
    division =
    { id       = { type = 5002 id = 6217 }
      name     = "��1�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 5002 id = 6218 }
      name     = "��1�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 5002 id = 6219 }
      name     = "��1�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
