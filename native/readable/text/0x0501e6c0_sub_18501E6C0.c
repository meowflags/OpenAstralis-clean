// sub_501E6C0
// rva 0x0501e6c0  size 390  section .text  group text
// window base 0x18501e6c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501E6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  int v12; // [rsp+1Ch] [rbp-Ch]
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a2;
    v13 = a1;
    v11 = a6;
    v12 = a5;
    v10 = a3;
    sub_1EB84E0();
  }
  else if ( (int)a2 >= 0 )
  {
    if ( a5 < 0 )
    {
LABEL_15:
      v14 = a2;
      v13 = a1;
      v11 = a6;
      v12 = a5;
      v10 = a3;
      sub_2770B00();
    }
    else if ( a3 != v6 )
    {
      if ( (unsigned int)(a2 + a5) > *(_DWORD *)(a3 + 8) )
      {
LABEL_17:
        v14 = a2;
        v13 = a1;
        v11 = a6;
        v12 = a5;
        v10 = a3;
        sub_2770B00();
      }
      else if ( (int)a1 >= 0 )
      {
        if ( a6 == v6 )
        {
LABEL_19:
          v14 = a2;
          v13 = a1;
          v12 = a5;
          v10 = a3;
          sub_2771080();
        }
        else if ( (unsigned int)(a2 + a1) <= *(_DWORD *)(a6 + 8) )
        {
          if ( a3 == v6 )
            JUMPOUT(0x30A039721LL);
          if ( a6 == v6 )
            JUMPOUT(0x30A03972BLL);
          v10 = a3;
          v12 = a5;
          v11 = a6;
          v13 = a1;
          v14 = a2;
          result = sub_2836340(
                     a1,
                     a2,
                     a3: a3 + 2LL * (unsigned int)a5 + 12,
                     a4: a6,
                     a5: a6 + (unsigned int)a1 + 12LL,
                     a6: (unsigned int)a2);
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280();
          return result;
        }
        sub_2770B00();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_501E860();
      }
      v14 = a2;
      v13 = a1;
      v11 = a6;
      v12 = a5;
      v10 = a3;
      sub_2770B00();
      goto LABEL_19;
    }
    v14 = a2;
    v13 = a1;
    v11 = a6;
    v12 = a5;
    sub_2771080();
    goto LABEL_17;
  }
  v14 = a2;
  v13 = a1;
  v11 = a6;
  v12 = a5;
  v10 = a3;
  sub_2770B00();
  goto LABEL_15;
}
