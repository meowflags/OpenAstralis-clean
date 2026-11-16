// sub_1E63B00
// rva 0x01e63b00  size 446  section .text  group text
// window base 0x181e63b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1E63B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  _DWORD *result; // rax
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+10h] [rbp-28h]
  __int64 v22; // [rsp+18h] [rbp-20h]
  __int64 v23; // [rsp+20h] [rbp-18h]
  unsigned int v24; // [rsp+28h] [rbp-10h]
  int v25; // [rsp+2Ch] [rbp-Ch]
  unsigned int v26; // [rsp+30h] [rbp-8h]
  unsigned int v27; // [rsp+34h] [rbp-4h]

  v23 = a5;
  v27 = a1;
  v26 = a2;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a6;
    v22 = a3;
    result = (_DWORD *)sub_1EB84E0();
LABEL_14:
    sub_276FC00(a1: v27, a2: v26, a3: result, a4: v24, a5: v6 + 40451856, a6: v22);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_1E63CC0();
  }
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v25 = a6;
    v22 = a3;
    v8 = sub_1EAA920(a1, a2, a3: 40451336);
    a2 = v26;
    LODWORD(a1) = v27;
    a6 = v25;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 24;
    *(_DWORD *)v8 = 40451336;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    v22 = a3;
  }
  v21 = v8;
  *(_QWORD *)(v8 + 8) = a6;
  v9 = *(unsigned int *)(v6 + 376650988);
  *(_DWORD *)(v8 + 4) = v9;
  v25 = a6;
  v10 = sub_1E64660(a1: (unsigned int)a2, a2, a3: v8, a4: v9, a5: (unsigned int)a1, a6: 0);
  v13 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v13 + 32) > *(_QWORD *)(v7 + 32) )
  {
    v24 = v10;
    v14 = sub_1EAA920(a1: v11, a2: v12, a3: 40451720);
    v10 = v24;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v13 + 32;
    *(_DWORD *)v13 = 40451720;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    v14 = v13;
  }
  v15 = v21;
  v16 = v26;
  v17 = v27;
  v18 = v23;
  *(_BYTE *)(v14 + 16) = MEMORY[0x11b5f764]/* 0x11b5f764 */ & v27;
  *(_DWORD *)(v14 + 12) = v16;
  *(_DWORD *)(v14 + 8) = (unsigned __int64)(v18 - v6) >> 3;
  *(_DWORD *)(v14 + 4) = (unsigned __int64)(v15 - v6) >> 3;
  v24 = v10;
  result = (_DWORD *)sub_1E60CE0(a1: v17, a2: v16, a3: (char *)(v6 + 34613584), a4: v18, a5: (_DWORD *)v14, a6: v10);
  if ( result != (_DWORD *)v6 && *result >> 3 != 5056482 )
    goto LABEL_14;
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
