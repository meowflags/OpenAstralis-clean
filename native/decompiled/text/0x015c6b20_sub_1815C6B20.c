// sub_1815C6B20
// rva 0x015c6b20  size 476  section .text  group text
// window base 0x1815c6b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C6B20(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  char *v9; // r14
  __int64 v10; // r15
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+10h] [rbp-28h]
  int v26; // [rsp+1Ch] [rbp-1Ch]
  char *v27; // [rsp+20h] [rbp-18h]
  __int64 v28; // [rsp+28h] [rbp-10h]
  char *v29; // [rsp+30h] [rbp-8h]

  v29 = a3;
  v28 = a5;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_14;
  }
  if ( a3 == v9
    || (char *)((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v8
                                                                         + *(_QWORD *)&v9[8 * (*(_DWORD *)a3 >> 3) + 120]))(
                 a1,
                 a2,
                 a3,
                 a4: a3) == v9 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v17 + 40) > *(_QWORD *)(v10 + 32) )
      {
        v17 = MEMORY[0x181EAA920](a1, a2, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v17 + 40;
        *(_DWORD *)v17 = 34081944;
        *(_DWORD *)(v17 + 4) = 0;
        *(_QWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v17 + 32) = 0;
      }
      *(_DWORD *)(v17 + 20) = 46923644;
      *(_DWORD *)(v17 + 16) = *((_DWORD *)v9 + 93585974);
      *(_DWORD *)(v17 + 12) = (unsigned __int64)(v17 - (_QWORD)v9) >> 3;
      v18 = *((unsigned int *)v9 + 93617864);
      v27 = &v9[8 * v18];
      v26 = v18;
      v25 = (_DWORD *)v17;
      MEMORY[0x18503B9A0](a1, a2, a3: v17, a4: v27, a5: 0);
      v22 = (unsigned __int64)v25;
      v25[2] = v26;
      if ( (*(_DWORD *)v22 & 2) != 0 )
      {
LABEL_14:
        v19 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v19) >> 9) + 0x38) = 0;
        v23 = v22;
      }
      else
      {
        v23 = v22;
      }
      MEMORY[0x182769900](a1: v20, a2: v21, a3: v23, a4: v19, a5: &a7);
    }
  }
  v13 = *(_QWORD *)(v10 + 40);
  v14 = v13 + 24;
  if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v10 + 32) )
    return sub_1815C6BCB(a1, a2, a3: v13, a4: v14, a5: v11, a6: v12, a7, a8);
  *(_QWORD *)(v10 + 40) = v14;
  *(_DWORD *)v13 = 35849120;
  *(_DWORD *)(v13 + 4) = 0;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  v15 = v29;
  *(_DWORD *)(v13 + 8) = (unsigned __int64)(v28 - (_QWORD)v9) >> 3;
  *(_DWORD *)(v13 + 4) = (unsigned __int64)(v15 - v9) >> 3;
  if ( *(int *)(v10 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v13;
}
