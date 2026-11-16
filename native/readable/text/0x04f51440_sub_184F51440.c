// sub_4F51440
// rva 0x04f51440  size 5361  section .text  group text
// window base 0x184f51440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F51440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_451;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377151500) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x17B0 )
  {
LABEL_451:
    sub_2771220(a1, a2, a3: (unsigned int)v8, a4: v7, a5: 6064);
LABEL_452:
    sub_2771220(a1, a2, a3: v9, a4: v7, a5: 1056);
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377155612) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 0x420 )
    goto LABEL_452;
  v10 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
  if ( (v10 & 0x10000) == 0 )
  {
    v11 = v7;
    goto LABEL_7;
  }
  if ( (v10 & 0x7FC0000) != 0x7FC0000 )
  {
    v11 = v7 - ((32 * v10) >> 23);
    goto LABEL_7;
  }
  if ( (int)v7 >= 11540 )
  {
    if ( (int)v7 >= 43918 )
    {
      if ( (int)v7 < 43943 )
      {
        if ( (int)v7 >= 43931 )
        {
          if ( (int)v7 >= 43937 )
          {
            if ( (int)v7 >= 43940 )
            {
              if ( (int)v7 >= 43942 )
              {
                v11 = 5078;
              }
              else if ( (_DWORD)v7 == 43940 )
              {
                v11 = 5076;
              }
              else
              {
                v11 = 5077;
              }
            }
            else if ( (int)v7 >= 43939 )
            {
              v11 = 5075;
            }
            else if ( (_DWORD)v7 == 43937 )
            {
              v11 = 5073;
            }
            else
            {
              v11 = 5074;
            }
          }
          else if ( (int)v7 >= 43934 )
          {
            if ( (int)v7 >= 43936 )
            {
              v11 = 5072;
            }
            else if ( (_DWORD)v7 == 43934 )
            {
              v11 = 5070;
            }
            else
            {
              v11 = 5071;
            }
          }
          else if ( (int)v7 >= 43933 )
          {
            v11 = 5069;
          }
          else if ( (_DWORD)v7 == 43931 )
          {
            v11 = 5067;
          }
          else
          {
            v11 = 5068;
          }
        }
        else if ( (int)v7 >= 43925 )
        {
          if ( (int)v7 >= 43928 )
          {
            if ( (int)v7 >= 43930 )
            {
              v11 = 5066;
            }
            else if ( (_DWORD)v7 == 43928 )
            {
              v11 = 5064;
            }
            else
            {
              v11 = 5065;
            }
          }
          else if ( (int)v7 >= 43927 )
          {
            v11 = 5063;
          }
          else if ( (_DWORD)v7 == 43925 )
          {
            v11 = 5061;
          }
          else
          {
            v11 = 5062;
          }
        }
        else if ( (int)v7 >= 43922 )
        {
          if ( (int)v7 >= 43924 )
          {
            v11 = 5060;
          }
          else if ( (_DWORD)v7 == 43922 )
          {
            v11 = 5058;
          }
          else
          {
            v11 = 5059;
          }
        }
        else if ( (int)v7 >= 43920 )
        {
          if ( (_DWORD)v7 == 43920 )
            v11 = 5056;
          else
            v11 = 5057;
        }
        else if ( (_DWORD)v7 == 43918 )
        {
          v11 = 5054;
        }
        else
        {
          v11 = 5055;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 43956 )
      {
        if ( (int)v7 >= 43950 )
        {
          if ( (int)v7 >= 43953 )
          {
            if ( (int)v7 >= 43955 )
            {
              v11 = 5091;
            }
            else if ( (_DWORD)v7 == 43953 )
            {
              v11 = 5089;
            }
            else
            {
              v11 = 5090;
            }
          }
          else if ( (int)v7 >= 43952 )
          {
            v11 = 5088;
          }
          else if ( (_DWORD)v7 == 43950 )
          {
            v11 = 5086;
          }
          else
          {
            v11 = 5087;
          }
        }
        else if ( (int)v7 >= 43947 )
        {
          if ( (int)v7 >= 43949 )
          {
            v11 = 5085;
          }
          else if ( (_DWORD)v7 == 43947 )
          {
            v11 = 5083;
          }
          else
          {
            v11 = 5084;
          }
        }
        else if ( (int)v7 >= 43945 )
        {
          if ( (_DWORD)v7 == 43945 )
            v11 = 5081;
          else
            v11 = 5082;
        }
        else if ( (_DWORD)v7 == 43943 )
        {
          v11 = 5079;
        }
        else
        {
          v11 = 5080;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 43962 )
      {
        if ( (int)v7 >= 43959 )
        {
          if ( (int)v7 >= 43961 )
          {
            v11 = 5097;
          }
          else if ( (_DWORD)v7 == 43959 )
          {
            v11 = 5095;
          }
          else
          {
            v11 = 5096;
          }
        }
        else if ( (int)v7 >= 43958 )
        {
          v11 = 5094;
        }
        else if ( (_DWORD)v7 == 43956 )
        {
          v11 = 5092;
        }
        else
        {
          v11 = 5093;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 43965 )
      {
        if ( (int)v7 >= 43964 )
        {
          v11 = 5100;
        }
        else if ( (_DWORD)v7 == 43962 )
        {
          v11 = 5098;
        }
        else
        {
          v11 = 5099;
        }
        goto LABEL_7;
      }
      if ( (int)v7 <= 43967 )
      {
        if ( (int)v7 >= 43967 )
        {
          v11 = 5103;
        }
        else if ( (_DWORD)v7 == 43965 )
        {
          v11 = 5101;
        }
        else
        {
          v11 = 5102;
        }
        goto LABEL_7;
      }
    }
    else
    {
      if ( (int)v7 >= 43893 )
      {
        if ( (int)v7 >= 43906 )
        {
          if ( (int)v7 >= 43912 )
          {
            if ( (int)v7 >= 43915 )
            {
              if ( (int)v7 >= 43917 )
              {
                v11 = 5053;
              }
              else if ( (_DWORD)v7 == 43915 )
              {
                v11 = 5051;
              }
              else
              {
                v11 = 5052;
              }
            }
            else if ( (int)v7 >= 43914 )
            {
              v11 = 5050;
            }
            else if ( (_DWORD)v7 == 43912 )
            {
              v11 = 5048;
            }
            else
            {
              v11 = 5049;
            }
          }
          else if ( (int)v7 >= 43909 )
          {
            if ( (int)v7 >= 43911 )
            {
              v11 = 5047;
            }
            else if ( (_DWORD)v7 == 43909 )
            {
              v11 = 5045;
            }
            else
            {
              v11 = 5046;
            }
          }
          else if ( (int)v7 >= 43908 )
          {
            v11 = 5044;
          }
          else if ( (_DWORD)v7 == 43906 )
          {
            v11 = 5042;
          }
          else
          {
            v11 = 5043;
          }
        }
        else if ( (int)v7 >= 43900 )
        {
          if ( (int)v7 >= 43903 )
          {
            if ( (int)v7 >= 43905 )
            {
              v11 = 5041;
            }
            else if ( (_DWORD)v7 == 43903 )
            {
              v11 = 5039;
            }
            else
            {
              v11 = 5040;
            }
          }
          else if ( (int)v7 >= 43902 )
          {
            v11 = 5038;
          }
          else if ( (_DWORD)v7 == 43900 )
          {
            v11 = 5036;
          }
          else
          {
            v11 = 5037;
          }
        }
        else if ( (int)v7 >= 43897 )
        {
          if ( (int)v7 >= 43899 )
          {
            v11 = 5035;
          }
          else if ( (_DWORD)v7 == 43897 )
          {
            v11 = 5033;
          }
          else
          {
            v11 = 5034;
          }
        }
        else if ( (int)v7 >= 43895 )
        {
          if ( (_DWORD)v7 == 43895 )
            v11 = 5031;
          else
            v11 = 5032;
        }
        else if ( (_DWORD)v7 == 43893 )
        {
          v11 = 5029;
        }
        else
        {
          v11 = 5030;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 11553 )
      {
        if ( (int)v7 >= 11547 )
        {
          if ( (int)v7 >= 11550 )
          {
            if ( (int)v7 >= 11552 )
            {
              v11 = 4288;
            }
            else if ( (_DWORD)v7 == 11550 )
            {
              v11 = 4286;
            }
            else
            {
              v11 = 4287;
            }
          }
          else if ( (int)v7 >= 11549 )
          {
            v11 = 4285;
          }
          else if ( (_DWORD)v7 == 11547 )
          {
            v11 = 4283;
          }
          else
          {
            v11 = 4284;
          }
        }
        else if ( (int)v7 >= 11544 )
        {
          if ( (int)v7 >= 11546 )
          {
            v11 = 4282;
          }
          else if ( (_DWORD)v7 == 11544 )
          {
            v11 = 4280;
          }
          else
          {
            v11 = 4281;
          }
        }
        else if ( (int)v7 >= 11542 )
        {
          if ( (_DWORD)v7 == 11542 )
            v11 = 4278;
          else
            v11 = 4279;
        }
        else if ( (_DWORD)v7 == 11540 )
        {
          v11 = 4276;
        }
        else
        {
          v11 = 4277;
        }
        goto LABEL_7;
      }
      if ( (int)v7 >= 43859 )
      {
        if ( (int)v7 >= 43890 )
        {
          if ( (int)v7 >= 43892 )
          {
            v11 = 5028;
          }
          else if ( (_DWORD)v7 == 43890 )
          {
            v11 = 5026;
          }
          else
          {
            v11 = 5027;
          }
        }
        else if ( (int)v7 >= 43889 )
        {
          v11 = 5025;
        }
        else if ( (_DWORD)v7 == 43859 )
        {
          v11 = 42931;
        }
        else
        {
          if ( (_DWORD)v7 != 43888 )
            goto LABEL_307;
          v11 = 5024;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 11557 )
      {
        if ( (int)v7 >= 11555 )
        {
          if ( (_DWORD)v7 == 11555 )
            v11 = 4291;
          else
            v11 = 4292;
        }
        else if ( (_DWORD)v7 == 11553 )
        {
          v11 = 4289;
        }
        else
        {
          v11 = 4290;
        }
        goto LABEL_7;
      }
      if ( (int)v7 <= 11565 )
      {
        if ( (int)v7 >= 11565 )
        {
          v11 = 4301;
        }
        else if ( (_DWORD)v7 == 11557 )
        {
          v11 = 4293;
        }
        else
        {
          if ( (_DWORD)v7 != 11559 )
            goto LABEL_307;
          v11 = 4295;
        }
        goto LABEL_7;
      }
    }
    goto LABEL_307;
  }
  if ( (int)v7 >= 4334 )
  {
    if ( (int)v7 >= 7549 )
    {
      if ( (int)v7 >= 11528 )
      {
        if ( (int)v7 >= 11534 )
        {
          if ( (int)v7 >= 11537 )
          {
            if ( (int)v7 >= 11539 )
            {
              v11 = 4275;
            }
            else if ( (_DWORD)v7 == 11537 )
            {
              v11 = 4273;
            }
            else
            {
              v11 = 4274;
            }
          }
          else if ( (int)v7 >= 11536 )
          {
            v11 = 4272;
          }
          else if ( (_DWORD)v7 == 11534 )
          {
            v11 = 4270;
          }
          else
          {
            v11 = 4271;
          }
        }
        else if ( (int)v7 >= 11531 )
        {
          if ( (int)v7 >= 11533 )
          {
            v11 = 4269;
          }
          else if ( (_DWORD)v7 == 11531 )
          {
            v11 = 4267;
          }
          else
          {
            v11 = 4268;
          }
        }
        else if ( (int)v7 >= 11530 )
        {
          v11 = 4266;
        }
        else if ( (_DWORD)v7 == 11528 )
        {
          v11 = 4264;
        }
        else
        {
          v11 = 4265;
        }
      }
      else if ( (int)v7 >= 11522 )
      {
        if ( (int)v7 >= 11525 )
        {
          if ( (int)v7 >= 11527 )
          {
            v11 = 4263;
          }
          else if ( (_DWORD)v7 == 11525 )
          {
            v11 = 4261;
          }
          else
          {
            v11 = 4262;
          }
        }
        else if ( (int)v7 >= 11524 )
        {
          v11 = 4260;
        }
        else if ( (_DWORD)v7 == 11522 )
        {
          v11 = 4258;
        }
        else
        {
          v11 = 4259;
        }
      }
      else if ( (int)v7 >= 11366 )
      {
        if ( (int)v7 >= 11521 )
        {
          v11 = 4257;
        }
        else if ( (_DWORD)v7 == 11366 )
        {
          v11 = 574;
        }
        else
        {
          if ( (_DWORD)v7 != 11520 )
            goto LABEL_307;
          v11 = 4256;
        }
      }
      else if ( (int)v7 >= 8126 )
      {
        if ( (_DWORD)v7 == 8126 )
        {
          v11 = 921;
        }
        else
        {
          if ( (_DWORD)v7 != 11365 )
            goto LABEL_307;
          v11 = 570;
        }
      }
      else if ( (_DWORD)v7 == 7549 )
      {
        v11 = 11363;
      }
      else
      {
        if ( (_DWORD)v7 != 7566 )
          goto LABEL_307;
        v11 = 42950;
      }
      goto LABEL_7;
    }
    if ( (int)v7 >= 4349 )
    {
      if ( (int)v7 < 7300 )
      {
        if ( (int)v7 >= 7297 )
        {
          if ( (int)v7 >= 7299 )
          {
            v11 = 1057;
          }
          else if ( (_DWORD)v7 == 7297 )
          {
            v11 = 1044;
          }
          else
          {
            v11 = 1054;
          }
        }
        else if ( (int)v7 >= 4351 )
        {
          if ( (_DWORD)v7 == 4351 )
          {
            v11 = 7359;
          }
          else
          {
            if ( (_DWORD)v7 != 7296 )
              goto LABEL_307;
            v11 = 1042;
          }
        }
        else if ( (_DWORD)v7 == 4349 )
        {
          v11 = 7357;
        }
        else
        {
          v11 = 7358;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 7303 )
      {
        if ( (int)v7 >= 7302 )
          v11 = 1066;
        else
          v11 = 1058;
        goto LABEL_7;
      }
      if ( (int)v7 <= 7545 )
      {
        if ( (int)v7 >= 7545 )
        {
          v11 = 42877;
        }
        else if ( (_DWORD)v7 == 7303 )
        {
          v11 = 1122;
        }
        else
        {
          if ( (_DWORD)v7 != 7304 )
            goto LABEL_307;
          v11 = 42570;
        }
        goto LABEL_7;
      }
    }
    else
    {
      if ( (int)v7 < 4341 )
      {
        if ( (int)v7 >= 4338 )
        {
          if ( (int)v7 >= 4340 )
          {
            v11 = 7348;
          }
          else if ( (_DWORD)v7 == 4338 )
          {
            v11 = 7346;
          }
          else
          {
            v11 = 7347;
          }
        }
        else if ( (int)v7 >= 4336 )
        {
          if ( (_DWORD)v7 == 4336 )
            v11 = 7344;
          else
            v11 = 7345;
        }
        else if ( (_DWORD)v7 == 4334 )
        {
          v11 = 7342;
        }
        else
        {
          v11 = 7343;
        }
        goto LABEL_7;
      }
      if ( (int)v7 < 4344 )
      {
        if ( (int)v7 >= 4343 )
        {
          v11 = 7351;
        }
        else if ( (_DWORD)v7 == 4341 )
        {
          v11 = 7349;
        }
        else
        {
          v11 = 7350;
        }
        goto LABEL_7;
      }
      if ( (int)v7 <= 4346 )
      {
        if ( (int)v7 >= 4346 )
        {
          v11 = 7354;
        }
        else if ( (_DWORD)v7 == 4344 )
        {
          v11 = 7352;
        }
        else
        {
          v11 = 7353;
        }
        goto LABEL_7;
      }
    }
LABEL_307:
    v11 = 0xFFFFFFFF;
    goto LABEL_7;
  }
  if ( (int)v7 >= 4309 )
  {
    if ( (int)v7 >= 4322 )
    {
      if ( (int)v7 >= 4328 )
      {
        if ( (int)v7 >= 4331 )
        {
          if ( (int)v7 >= 4333 )
          {
            v11 = 7341;
          }
          else if ( (_DWORD)v7 == 4331 )
          {
            v11 = 7339;
          }
          else
          {
            v11 = 7340;
          }
        }
        else if ( (int)v7 >= 4330 )
        {
          v11 = 7338;
        }
        else if ( (_DWORD)v7 == 4328 )
        {
          v11 = 7336;
        }
        else
        {
          v11 = 7337;
        }
      }
      else if ( (int)v7 >= 4325 )
      {
        if ( (int)v7 >= 4327 )
        {
          v11 = 7335;
        }
        else if ( (_DWORD)v7 == 4325 )
        {
          v11 = 7333;
        }
        else
        {
          v11 = 7334;
        }
      }
      else if ( (int)v7 >= 4324 )
      {
        v11 = 7332;
      }
      else if ( (_DWORD)v7 == 4322 )
      {
        v11 = 7330;
      }
      else
      {
        v11 = 7331;
      }
    }
    else if ( (int)v7 >= 4316 )
    {
      if ( (int)v7 >= 4319 )
      {
        if ( (int)v7 >= 4321 )
        {
          v11 = 7329;
        }
        else if ( (_DWORD)v7 == 4319 )
        {
          v11 = 7327;
        }
        else
        {
          v11 = 7328;
        }
      }
      else if ( (int)v7 >= 4318 )
      {
        v11 = 7326;
      }
      else if ( (_DWORD)v7 == 4316 )
      {
        v11 = 7324;
      }
      else
      {
        v11 = 7325;
      }
    }
    else if ( (int)v7 >= 4313 )
    {
      if ( (int)v7 >= 4315 )
      {
        v11 = 7323;
      }
      else if ( (_DWORD)v7 == 4313 )
      {
        v11 = 7321;
      }
      else
      {
        v11 = 7322;
      }
    }
    else if ( (int)v7 >= 4311 )
    {
      if ( (_DWORD)v7 == 4311 )
        v11 = 7319;
      else
        v11 = 7320;
    }
    else if ( (_DWORD)v7 == 4309 )
    {
      v11 = 7317;
    }
    else
    {
      v11 = 7318;
    }
    goto LABEL_7;
  }
  if ( (int)v7 >= 619 )
  {
    if ( (int)v7 >= 670 )
    {
      if ( (int)v7 >= 4306 )
      {
        if ( (int)v7 >= 4308 )
        {
          v11 = 7316;
        }
        else if ( (_DWORD)v7 == 4306 )
        {
          v11 = 7314;
        }
        else
        {
          v11 = 7315;
        }
      }
      else if ( (int)v7 >= 4305 )
      {
        v11 = 7313;
      }
      else if ( (_DWORD)v7 == 670 )
      {
        v11 = 42928;
      }
      else
      {
        if ( (_DWORD)v7 != 4304 )
          goto LABEL_307;
        v11 = 7312;
      }
    }
    else if ( (int)v7 >= 642 )
    {
      if ( (int)v7 >= 669 )
      {
        v11 = 42930;
      }
      else if ( (_DWORD)v7 == 642 )
      {
        v11 = 42949;
      }
      else
      {
        if ( (_DWORD)v7 != 647 )
          goto LABEL_307;
        v11 = 42929;
      }
    }
    else if ( (int)v7 >= 625 )
    {
      if ( (_DWORD)v7 == 625 )
      {
        v11 = 11374;
      }
      else
      {
        if ( (_DWORD)v7 != 637 )
          goto LABEL_307;
        v11 = 11364;
      }
    }
    else if ( (_DWORD)v7 == 619 )
    {
      v11 = 11362;
    }
    else
    {
      if ( (_DWORD)v7 != 620 )
        goto LABEL_307;
      v11 = 42925;
    }
    goto LABEL_7;
  }
  if ( (int)v7 >= 604 )
  {
    if ( (int)v7 >= 613 )
    {
      if ( (int)v7 >= 618 )
      {
        v11 = 42926;
      }
      else if ( (_DWORD)v7 == 613 )
      {
        v11 = 42893;
      }
      else
      {
        if ( (_DWORD)v7 != 614 )
          goto LABEL_307;
        v11 = 42922;
      }
    }
    else if ( (int)v7 >= 612 )
    {
      v11 = 42955;
    }
    else if ( (_DWORD)v7 == 604 )
    {
      v11 = 42923;
    }
    else
    {
      if ( (_DWORD)v7 != 609 )
        goto LABEL_307;
      v11 = 42924;
    }
    goto LABEL_7;
  }
  if ( (int)v7 >= 592 )
  {
    if ( (int)v7 <= 594 )
    {
      if ( (int)v7 >= 594 )
      {
        v11 = 11376;
      }
      else if ( (_DWORD)v7 == 592 )
      {
        v11 = 11375;
      }
      else
      {
        v11 = 11373;
      }
      goto LABEL_7;
    }
    goto LABEL_307;
  }
  if ( (int)v7 >= 575 )
  {
    if ( (_DWORD)v7 == 575 )
    {
      v11 = 11390;
    }
    else
    {
      if ( (_DWORD)v7 != 576 )
        goto LABEL_307;
      v11 = 11391;
    }
  }
  else if ( (_DWORD)v7 == 383 )
  {
    v11 = 83;
  }
  else
  {
    if ( (_DWORD)v7 != 411 )
      goto LABEL_307;
    v11 = 42972;
  }
LABEL_7:
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280();
  return v11;
}
