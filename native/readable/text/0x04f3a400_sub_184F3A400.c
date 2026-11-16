// sub_4F3A400
// rva 0x04f3a400  size 563  section .text  group text
// window base 0x184f3a400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3A400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // ebp
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r9
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]
  __int64 v30; // [rsp+18h] [rbp-30h]
  __int64 v31; // [rsp+20h] [rbp-28h]
  unsigned int v32; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v33; // [rsp+30h] [rbp-18h]
  unsigned int v34; // [rsp+34h] [rbp-14h]
  unsigned int v35; // [rsp+38h] [rbp-10h]
  unsigned int v36; // [rsp+3Ch] [rbp-Ch]
  unsigned int v37; // [rsp+40h] [rbp-8h]
  unsigned int v38; // [rsp+44h] [rbp-4h]

  v31 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v7 + 8) )
  {
    v36 = a5;
    sub_1EB84E0();
LABEL_18:
    v30 = v8;
    sub_2771080();
    goto LABEL_19;
  }
  v30 = a6;
  v38 = *(char *)(a3 + 12);
  v37 = *(_DWORD *)(a3 + 8);
  v36 = a5;
  sub_632A360(a1: v6 + 376643464, a2, a3: a5, a4: v37, a5: v37, a6: v37);
  v8 = v30;
  if ( v30 == v6 )
    v8 = v6 + 353301280;
  v9 = *(unsigned int *)(v8 + 4);
  if ( (_DWORD)v9 == 0 )
    goto LABEL_18;
  v10 = v38;
  v11 = v31;
  v12 = *(_DWORD *)(v6 + 8 * v9 + 8);
  v13 = *(char *)(v8 + 12);
  v14 = *(unsigned int *)(v31 + 4);
  v15 = v6 + 8 * v14;
  v16 = v13;
  v17 = v12 >> *(_BYTE *)(v8 + 12);
  v18 = v37 + v17;
  v35 = v37 + v17;
  v19 = v13 | v38;
  v20 = (char)(v13 | v38);
  if ( v38 != v20 )
    goto LABEL_6;
  v16 = v20;
  v26 = (__int64)(int)v18 << v20;
  if ( (_DWORD)v14 == 0 )
  {
LABEL_20:
    sub_2771080(a1: v26, a2: v36, a3: v11, a4: v37);
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
    return sub_4F3A640();
  }
  if ( v26 <= *(unsigned int *)(v6 + 8 * v14 + 8) )
  {
    v32 = v20;
    v33 = v17;
    v30 = v8;
  }
  else
  {
LABEL_6:
    v34 = v19;
    v33 = v17;
    v30 = v8;
    v29 = v6 + 8 * v14;
    v32 = v20;
    v21 = sub_4F38CC0(a1: v18, a2: v20, a3: v15, a4: v16, a5: v38, a6: v37);
    v22 = v31;
    *(_DWORD *)(v31 + 4) = (unsigned __int64)(v21 - v6) >> 3;
    if ( (*(_DWORD *)v22 & 2) != 0 )
    {
      v27 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v27) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(v22 + 12) = v34;
    v15 = v21;
    v10 = v32;
  }
  if ( v15 == v6 )
  {
LABEL_19:
    sub_2771080();
    goto LABEL_20;
  }
  v34 = v10;
  v29 = v15;
  sub_1EB4960(a1: (v33 + v36) << v10, a2: (v37 - v36) << v10, a3: v15, a4: v10, a5: v36 << v10, a6: v15);
  *(_DWORD *)(v31 + 8) = v35;
  sub_4FF2C40(a1: v34, a2: v24, a3: v30, a4: v23, a5: v29, a6: v36);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v31;
}
