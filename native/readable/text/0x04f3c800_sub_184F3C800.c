// sub_4F3C800
// rva 0x04f3c800  size 550  section .text  group text
// window base 0x184f3c800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3C800(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // r10d
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r9
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // edx
  int v27; // ecx
  int v28; // edi
  int v29; // esi
  int v30; // r8d
  int v31; // r9d
  _QWORD v32[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+18h] [rbp-20h]
  unsigned int v34; // [rsp+20h] [rbp-18h]
  unsigned int v35; // [rsp+24h] [rbp-14h]
  unsigned int v36; // [rsp+28h] [rbp-10h]
  int v37; // [rsp+2Ch] [rbp-Ch]
  unsigned int v38; // [rsp+30h] [rbp-8h]
  unsigned int v39; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v32 <= *(_QWORD *)(v10 + 8) )
  {
LABEL_23:
    v36 = a5;
    LODWORD(result) = sub_1EB84E0(a1, a2, a3, a4: a3);
    goto LABEL_24;
  }
  v33 = a3;
  v39 = a6;
  result = (unsigned int)*(char *)(a3 + 12);
  v7 = *(_DWORD *)(a3 + 8);
  if ( (a5 & 0x80000000) != 0LL || (int)v7 <= (int)a5 )
  {
    v38 = *(_DWORD *)(a3 + 8);
    v37 = result;
    v36 = a5;
    v22 = sub_632ACC0(a1, a2, a3: v9 + 376643464, a4, (unsigned int)a5, a6: v7);
    if ( v22 == v9 )
    {
LABEL_27:
      sub_2771080(a1: v24, a2: v25, a3: v33, a4: v23, a5: v36, a6: v39);
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
      return sub_4F3CA40(a1: v28, a2: v29, a3: v26, a4: v27, a5: v30, a6: v31, a7);
    }
    sub_2769900(a1: v24, a2: v25, a3: v22, a4: v23, a5: &a7);
    goto LABEL_23;
  }
  v12 = *(unsigned int *)(a3 + 4);
  v8 = v9 + 8 * v12;
  v13 = (unsigned int)result | ((255 - a6) >> 31);
  v14 = (char)(*(_BYTE *)(a3 + 12) | ((int)(255 - a6) < 0));
  if ( (_DWORD)result != v14 )
  {
    v35 = result | ((255 - a6) >> 31);
    goto LABEL_6;
  }
  v35 = result | ((255 - a6) >> 31);
  v13 = v14;
  v17 = (unsigned __int64)v7 << v14;
  if ( (_DWORD)v12 == 0 )
  {
LABEL_24:
    v34 = v14;
    v38 = v7;
    v37 = result;
    v36 = a5;
    sub_2771080(a1: v12, a2: v17);
LABEL_25:
    sub_2771080(a1: v16, a2: v17, a3, a4: v18, a5, a6: v20);
    goto LABEL_26;
  }
  v16 = *(unsigned int *)(v9 + 8 * v12 + 8);
  if ( v17 <= v16 )
  {
    v34 = (char)(result | ((int)(255 - a6) < 0));
    v38 = v7;
    v36 = a5;
    v18 = a3;
    v19 = v8;
    goto LABEL_8;
  }
LABEL_6:
  v36 = a5;
  v37 = result;
  v32[2] = v8;
  v38 = v7;
  v34 = (char)(result | ((int)(255 - a6) < 0));
  v15 = sub_4F38CC0(a1: v7, a2: v14, a3: v8, a4: v13, a5: result, a6: v7);
  v18 = v33;
  *(_DWORD *)(v33 + 4) = (unsigned __int64)(v15 - v9) >> 3;
  if ( (*(_DWORD *)v18 & 2) != 0 )
  {
    a5 = v18 & 0xFFFFFFFFFFF80000LL;
    v21 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v21) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v21) >> 9) + 0x38) = 0;
  }
  a3 = v35;
  *(_BYTE *)(v18 + 12) = v35;
  v19 = v15;
  result = v34;
LABEL_8:
  if ( (_DWORD)result != 0 )
  {
    *(_WORD *)(v19 + (int)(2 * v36) + 12) = v39;
    *(_BYTE *)(v18 + 13) = 1;
    goto LABEL_10;
  }
  v20 = v39;
  if ( v19 == v9 )
    goto LABEL_25;
  LODWORD(v8) = *(_DWORD *)(v19 + 8);
  if ( (unsigned int)v8 <= v36 )
  {
LABEL_26:
    sub_2771220(a1: v16, a2: v17, a3: v36, a4: v18, a5: (unsigned int)v8, a6: v20);
    goto LABEL_27;
  }
  *(_BYTE *)(v19 + v36 + 12) = v39;
LABEL_10:
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280();
  return result;
}
