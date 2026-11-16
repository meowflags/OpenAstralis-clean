// sub_5044700
// rva 0x05044700  size 582  section .text  group text
// window base 0x185044700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5044700(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  unsigned int v19; // eax
  _DWORD *v20; // rdx
  unsigned __int64 i; // r8
  int v22; // ebp
  _DWORD *v23; // r9
  __int64 v24; // rdi
  _QWORD v26[7]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h]
  _DWORD *v30; // [rsp+50h] [rbp-18h]
  int v31; // [rsp+5Ch] [rbp-Ch]
  int v32; // [rsp+60h] [rbp-8h]
  int v33; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)v26 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
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
    return sub_5044960();
  }
  else
  {
    v30 = (_DWORD *)(v2 + 377212768);
    v29 = v2 + 376351776;
    v28 = sub_1EF1B00(a1, a2, a3: v2 + 376351776, a4: v2 + 377212768, a5: v2 + 359486392);
    v27 = sub_1EF1B00(a1: v5, a2: v6, a3: v29, a4: v4, a5: v2 + 359486552);
    v29 = sub_1EF1B00(a1: v8, a2: v9, a3: v29, a4: v7, a5: v2 + 359486472);
    if ( v28 == v2 )
      v12 = sub_4FC5620(a1: v10, a2: v11, a3: v2 + 376351480);
    else
      v12 = sub_4F8A060(a1: v10, a2: v11, a3: v28, a4: v28, a5: 10);
    v33 = v12;
    if ( v27 == v2 )
    {
      v17 = v33;
      if ( v33 < 256 )
        JUMPOUT(0x30A05F8C6LL);
      v32 = v33;
    }
    else
    {
      v16 = sub_4F8A060(a1: v14, a2: v15, a3: v27, a4: v13, a5: 10);
      if ( v33 < v16 )
        JUMPOUT(0x30A05F7AFLL);
      v17 = v16;
      v32 = v16;
    }
    v31 = v17;
    if ( v29 == v2 )
    {
      v19 = v31;
      if ( v31 / 2 < 1 )
        JUMPOUT(0x30A05F8EALL);
      v18 = v31 / 2;
    }
    else
    {
      v18 = sub_4F8A060(a1: v14, a2: v15, a3: v29, a4: v13, a5: 10);
      v19 = v31;
    }
    v20 = *(_DWORD **)(v3 + 40);
    if ( (unsigned __int64)(v20 + 90) > *(_QWORD *)(v3 + 32) )
    {
      v33 = v18;
      v20 = (_DWORD *)sub_1EAA920(a1: v14, a2: v15, a3: 40473840);
      v18 = v33;
      v22 = v32;
      v19 = v31;
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v20 + 90;
      *v20 = 40473840;
      v20[1] = 0;
      for ( i = 2; i < 90; i += 2LL )
        *(_QWORD *)&v20[i] = 0;
      v22 = v32;
    }
    v23 = v30;
    LODWORD(v26[1]) = v22;
    LODWORD(v26[2]) = v18;
    v26[3] = v2 + 377212800;
    v26[4] = 30;
    v26[5] = v2 + 376359832;
    v33 = v18;
    v30 = v20;
    sub_5A3EDA0(a1: v2 + 377212784, a2: 1, a3: v20, a4: 0, a5: v19, a6: v23);
    if ( *(int *)(v3 + 16) <= 0 )
      sub_277F280(a1: v24, a2: v28, a3: v27, a4: v29);
    return (__int64)v30;
  }
}
