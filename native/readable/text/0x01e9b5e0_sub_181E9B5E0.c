// sub_1E9B5E0
// rva 0x01e9b5e0  size 656  section .text  group text
// window base 0x181e9b5e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9B5E0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14)
{
  _DWORD *v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  double v22; // xmm0_8
  _DWORD *v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v31; // [rsp+10h] [rbp-38h]
  _DWORD *v32; // [rsp+18h] [rbp-30h]
  _DWORD *v33; // [rsp+20h] [rbp-28h]
  char *v34; // [rsp+28h] [rbp-20h]
  char *v35; // [rsp+30h] [rbp-18h]
  unsigned int v36; // [rsp+38h] [rbp-10h]
  unsigned int v37; // [rsp+3Ch] [rbp-Ch]
  _DWORD *v38; // [rsp+40h] [rbp-8h]

  v38 = (_DWORD *)a6;
  v37 = a1;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v15 + 8) )
  {
    v36 = a2;
    v22 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v30);
LABEL_19:
    sub_276EFE0(a1: v20, a2: v21, a3: v23, a4: v22);
    sub_276EAE0(a1: v37, a2: v36, a3: v27, a4: v28, a5: v29, a6: v38);
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
    return sub_1E9B880();
  }
  v16 = v14 + 94153030;
  if ( (_DWORD *)a6 == v14 )
  {
    v36 = a2;
    sub_2084840(a1, a2, a3: v14 + 94153030, a4: v16, a5: v14 + 90179112);
    if ( *(int *)(v15 + 16) <= 0 )
      JUMPOUT(0x181E9B813LL);
    return 1;
  }
  else
  {
    if ( a6 > (unsigned __int64)v14 )
    {
      v36 = a2;
      if ( v14 + 0x20000 > v38 )
        return sub_181E9B790(
                 a1,
                 a2,
                 a3: (int)v14 + 0x80000,
                 a4: (_DWORD)v16,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14);
      v33 = v14 + 94153030;
      v32 = v14 + 94153446;
    }
    else
    {
      v33 = v14 + 94153030;
      v32 = v14 + 94153446;
      v36 = a2;
    }
    v35 = (char *)v14 + (a6 & 0xFFFFFFFFFFFFFFF8LL);
    v31 = v14 + 94164236;
    if ( (unsigned int)sub_1EBCC80(a1, a2, a3: v14 + 94164236, a4: v16, a5: v35) != 0 )
    {
      sub_2084840(a1: v18, a2: v19, a3: v33, a4: v17, a5: v14 + 90179126);
      if ( v35 != nullptr )
        JUMPOUT(0x303D25673LL);
      v23 = v14;
      goto LABEL_19;
    }
    if ( (unsigned int)sub_1E9AEE0(a1: v37, a2: v36, a3: (int)v32, a4: v17, a5: (int)v33, a6: (unsigned __int64)v38) == 0 )
      JUMPOUT(0x181E9B7BBLL);
    if ( v37 != 0 )
    {
      v34 = (char *)v14 + (*v38 & 0xFFFFFFF8);
      if ( (unsigned int)sub_1EBCC80(a1: v37, a2: v26, a3: v31, a4: v25, a5: v34) != 0 )
        JUMPOUT(0x181E9B7D0LL);
    }
    if ( *(int *)(v15 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
}
