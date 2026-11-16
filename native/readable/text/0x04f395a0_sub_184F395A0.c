// sub_4F395A0
// rva 0x04f395a0  size 435  section .text  group text
// window base 0x184f395a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F395A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 i; // r8
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  unsigned int v17; // [rsp+1Ch] [rbp-Ch]
  unsigned int v18; // [rsp+20h] [rbp-8h]
  unsigned int v19; // [rsp+24h] [rbp-4h]

  v16 = a3;
  v19 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v5 )
  {
    v18 = *(_DWORD *)(a3 + 8);
    v7 = sub_50217A0(a1, a2, a3: v18);
    if ( (v7 & 0x80000000) != 0 )
    {
LABEL_22:
      sub_2770E80(a1: v8, a2: v9, a3: v7, a4: v18);
LABEL_23:
      v15 = v10;
      sub_2770B00();
      goto LABEL_24;
    }
    v10 = *(_QWORD *)(v6 + 40);
    v11 = (v7 + 19LL) & 0x1FFFFFFF8LL;
    if ( v11 >= 0x20000 || v10 + v11 > *(_QWORD *)(v6 + 32) )
    {
      v17 = v7;
      v10 = sub_1EAA840(a1: v8, a2: v9, a3: 34082368, a4: 34082368, a5: v7);
      v7 = v17;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v10 + v11;
      *(_QWORD *)v10 = 34082368;
      *(_DWORD *)(v10 + 8) = v7;
      *(_DWORD *)(v10 + 12) = 0;
      if ( v11 - 16 >= 0x800 )
      {
        v17 = v7;
        memset((void *)(v10 + 16), 0, v11 - 16);
        v8 = v10 + v11;
        v7 = v17;
      }
      else
      {
        for ( i = 16; v11 > i; i += 8LL )
          *(_QWORD *)(v10 + i) = 0;
      }
    }
    if ( (v19 & 0x80000000) != 0 )
      goto LABEL_23;
    if ( v19 > v18 )
    {
LABEL_24:
      v15 = v10;
      sub_2770B00();
    }
    else if ( v19 <= v7 >> 1 )
    {
      if ( v16 == v5 )
        JUMPOUT(0x309E4F6A5LL);
      if ( v10 == v5 )
        JUMPOUT(0x309E4F6AFLL);
      v15 = v10;
      sub_2836300(a1: v8, a2: v9, a3: v16 + 12, a4: v10 + 12, a5: v10 + 12, a6: v19);
      if ( *(int *)(v6 + 16) <= 0 )
        sub_277F280();
      return v15;
    }
    sub_2770B00(a1: v8, a2: v9, a3: v16);
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
    return sub_4F39760();
  }
  v7 = sub_2771080();
  goto LABEL_22;
}
