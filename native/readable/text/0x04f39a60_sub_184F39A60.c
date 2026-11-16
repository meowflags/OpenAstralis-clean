// sub_4F39A60
// rva 0x04f39a60  size 426  section .text  group text
// window base 0x184f39a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F39A60(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // ebx
  unsigned __int64 v19; // rdi
  int v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+18h] [rbp-30h]
  __int64 v22; // [rsp+20h] [rbp-28h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+34h] [rbp-14h]
  int v25; // [rsp+38h] [rbp-10h]
  unsigned int v26; // [rsp+3Ch] [rbp-Ch]
  unsigned int v27; // [rsp+40h] [rbp-8h]
  unsigned int v28; // [rsp+44h] [rbp-4h]

  v23 = a3;
  v22 = a6;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v27 = a5;
    sub_1EB84E0();
    goto LABEL_14;
  }
  v8 = *(char *)(a3 + 12);
  v28 = *(_DWORD *)(a3 + 8);
  v27 = a5;
  v26 = v8;
  sub_632A360(a1: v6 + 376643464, a2, a3: a5, a4: v28, a5: v28, a6: v28);
  if ( v22 == v6 )
  {
LABEL_14:
    v12 = sub_2771080(a1: v9, a2: v10, a3: v23);
    goto LABEL_15;
  }
  v11 = *(unsigned int *)(v23 + 4);
  v25 = *(_DWORD *)(v22 + 8);
  v24 = v25 + v28;
  v12 = sub_4F39060(a1: v9, a2: v10, a3: v6 + 8 * v11, a4: v25 + v28, a5: v26, a6: v25 + v28);
  if ( v12 == v6 )
  {
LABEL_15:
    sub_2771080(a1: v13, a2: v14, a3: v23, a4: v12, a5: v27, a6: v22);
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
    return sub_4F39C20();
  }
  v21 = v12;
  sub_1EB4960(a1: (v25 + v27) << v26, a2: (v28 - v27) << v26, a3: v12, a4: v26, a5: v27 << v26, a6: v12);
  v15 = sub_4F3AAC0(a1: v27, a2: v22, a3: v21, a4: 0, a5: v26, a6: v24, a7: v20, a8: v25);
  if ( v21 == v15 )
  {
    v17 = v24;
    v16 = v23;
  }
  else
  {
    v16 = v23;
    *(_BYTE *)(v23 + 12) = 1;
    v17 = v24;
  }
  *(_DWORD *)(v16 + 8) = v17;
  *(_DWORD *)(v16 + 4) = (unsigned __int64)(v15 - v6) >> 3;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    v19 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v19) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v19) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v16;
}
