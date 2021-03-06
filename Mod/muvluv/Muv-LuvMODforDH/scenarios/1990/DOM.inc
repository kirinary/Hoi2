
##############################
# Country definition for DOM #
##############################

province =
{ id         = 893
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 1 current_size = 1 }
  ic         = 4
}              # �V�E�_�[�E�g���q�[��

#####################
# Country main data #
#####################

country =
{ tag                 = DOM
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  manpower            = 2
  transports          = 12
  capital             = 893
  regular_id          = U09

  money               = 350
  escorts             = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  ownedprovinces      = { 893 }
  controlledprovinces = { 893 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 893 }
  landunit =
  { id       = { type = 7501 id = 6113 }
    name     = "��1�R�c"
    location = 893
    home     = 893
    mission  = { type = none target = 893 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 7501 id = 6115 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 7501 id = 6116 }
    name     = "��2�R�c"
    location = 893
    home     = 893
    mission  = { type = none target = 893 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 7501 id = 6118 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 7502 id = 6119 }
    name     = "��3���"
    location = 893
    home     = 893
    base     = 893
    division =
    { id       = { type = 7502 id = 6121 }
      name     = "��1�~�T�C�����t�c"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
