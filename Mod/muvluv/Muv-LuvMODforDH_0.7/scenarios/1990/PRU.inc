
##############################
# Country definition for PRU #
##############################

province = { id = 816 ic = 4 } # �g���q�[��
province = { id = 829 ic = 2 } # �N�X�R
province = { id = 830 ic = 8 } # ���}
province = { id = 831 ic = 5 } # �A���L�p

#####################
# Country main data #
#####################

country =
{ tag                 = PRU
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 500
  supplies            = 200
  manpower            = 22
  transports          = 30
  escorts             = 10
  capital             = 830
  regular_id          = U08

  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  ownedprovinces      = { 816 821 829 830 831 }
  controlledprovinces = { 816 821 829 830 831 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  nationalprovinces   = { 816 821 829 830 831 }
  landunit =
  { id       = { type = 17501 id = 6257 }
    name     = "��1�R�c"
    location = 830
    home     = 830
    mission  = { type = none target = 830 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 17501 id = 6259 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 17501 id = 6260 }
    name     = "��2�R�c"
    location = 831
    home     = 831
    mission  = { type = none target = 831 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 17501 id = 6262 }
      name          = "��2�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 17501 id = 6263 }
    name     = "��3�R�c"
    location = 868
    home     = 868
    mission  = { type = none target = 868 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 17501 id = 6265 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 17502 id = 2409 }
    name     = "��2���"
    location = 890
    home     = 890
    base     = 890
    division =
    { id       = { type = 17502 id = 6266 }
      name     = "��1�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 17502 id = 6267 }
      name     = "��2�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 17502 id = 6268 }
      name     = "��1�A����/�g���͎t�c"
      model    = 3
      type     = transport
      strength            = 100
    }
  }
}
