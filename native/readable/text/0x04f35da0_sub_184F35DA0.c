// sub_4F35DA0
// rva 0x04f35da0  size 459  section .text  group text
// window base 0x184f35da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F35DA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r9d
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // [rsp+0h] [rbp-38h] BYREF
  __int64 v35; // [rsp+18h] [rbp-20h]
  _DWORD *v36; // [rsp+20h] [rbp-18h]
  unsigned int v37; // [rsp+28h] [rbp-10h]
  int v38; // [rsp+2Ch] [rbp-Ch]
  unsigned int v39; // [rsp+30h] [rbp-8h]
  int v40; // [rsp+34h] [rbp-4h]

  v40 = a5;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v13 + 8) )
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
    return sub_4F35F80(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33);
  }
  else
  {
    v14 = *(unsigned int *)(a3 + 4);
    v15 = *(char *)(a3 + 12);
    v39 = v15;
    v16 = *(unsigned int *)(a3 + 8);
    v17 = v12 + 8 * v14;
    if ( a5 != 0 )
      JUMPOUT(0x309E4BDD6LL);
    v36 = (_DWORD *)a3;
    v38 = v16 + 5;
    v37 = v16;
    v18 = sub_4F39060(a1, a2, a3: v17, a4: v16, a5: v15, a6: (unsigned int)(v16 + 5));
    if ( v40 != 0 )
    {
      if ( v39 == 0 )
        JUMPOUT(0x184F35EB7LL);
      v35 = v18;
      sub_5021CA0(a1: 114, a2: 117, a3: v18, a4: 101, a5: v37, a6: 116);
      v26 = (unsigned __int64)v36;
      v36[1] = (unsigned __int64)(v35 - v12) >> 3;
      if ( (*(_DWORD *)v26 & 2) != 0 )
      {
        v28 = (v26 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) = 0;
      }
      *(_DWORD *)(v26 + 8) = v38;
      if ( *(int *)(v13 + 16) <= 0 )
        sub_277F280(a1: v24, a2: v25, a3: v26, a4: v39);
      return v26;
    }
    else
    {
      return sub_184F35E78(a1: v21, a2: v22, a3: v19, a4: v20, a5: 0, a6: v23, a7, a8, a9, a10, a11, a12);
    }
  }
}
