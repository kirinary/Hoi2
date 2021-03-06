
##############################
# Country definition for ARG #
##############################

province = { id = 667 ic = 4 } # ���v���^
province = { id = 843 ic = 2 } # �T���^
province =
{ id       = 844
  air_base = { size = 2 current_size = 2 }
}            # ���V�X�e���V�A
province = { id = 845 nuclear_power = 3 } # ���T���I
province = { id = 850 ic = 3 } # �R���G���e�X
province =
{ id         = 851
  ic         = 8
  anti_air   = 5
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # �u�G�m�X�A�C���X
province =
{ id            = 852
  air_base      = { size = 2 current_size = 2 }
  nuclear_power = 4
}                 # �R���h�o
province = { id = 853 ic = 3 } # �T���E�~�Q���E�f�E�g�D�N�}��
province =
{ id         = 857
  ic         = 3
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 4 current_size = 4 }
}              # �}���E�f���E�v���^
province = { id = 858 ic = 2 } # ���I�E�K�W�F�[�S�X
province =
{ id         = 859
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # �R���h���E���o�_�r�A

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
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  policy              = { democratic = 8 political_left = 4 freedom = 8 free_market = 7 professional_army = 3 defense_lobby = 6 interventionism = 3 }
  landunit =
  { id       = { type = 1001 id = 6155 }
    name     = "��1�R�c"
    location = 667
    home     = 667
    division =
    { id            = { type = 1001 id = 6157 }
      name          = "��1�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1001 id = 6158 }
    name     = "��2�R�c"
    location = 844
    home     = 844
    division =
    { id            = { type = 1001 id = 6160 }
      name          = "��2�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1001 id = 6161 }
    name     = "��3�R�c"
    location = 843
    home     = 843
    division =
    { id            = { type = 1001 id = 6163 }
      name          = "��3�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1001 id = 6164 }
    name     = "��4�R�c"
    location = 852
    home     = 852
    division =
    { id            = { type = 1001 id = 6166 }
      name          = "��4�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1001 id = 6167 }
    name     = "��5�R�c"
    location = 858
    home     = 858
    division =
    { id            = { type = 1001 id = 6169 }
      name          = "��5�����x���S�ێt�c"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1001 id = 6170 }
    name     = "��6�R�c"
    location = 851
    home     = 851
    division =
    { id            = { type = 1001 id = 6172 }
      name          = "��1�@�B�������t�c"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 1001 id = 6173 }
    name     = "��7�R�c"
    location = 851
    home     = 851
    division =
    { id            = { type = 1001 id = 6175 }
      name          = "��1��͐�Ԏt�c"
      model         = 3
      brigade_model = 0
      type          = armor
      extra         = sp_artillery
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 1001 id = 6176 }
      name          = "��1������Ԏt�c"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 1002 id = 2365 }
    name     = "��1���"
    location = 857
    home     = 857
    base     = 857
    division =
    { id       = { type = 1002 id = 6177 }
      name     = "��1�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1002 id = 6178 }
      name     = "��2�~�T�C�����t�c"
      model    = 3
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 1002 id = 6179 }
      name     = "��1�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1002 id = 6180 }
      name     = "��2�쒀�͎t�c"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 1002 id = 6181 }
      name     = "��1�A����/�g���͎t�c"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
