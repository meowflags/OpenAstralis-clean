// sub_182757C20
// rva 0x02757c20  size 302  section .text  group text
// window base 0x182757c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182757C20(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, int a5, int a6, char a7)
{
  unsigned int *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  char v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  unsigned int *v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+20h] [rbp-8h]
  int v25; // [rsp+24h] [rbp-4h]

  v23 = a3;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_13;
  if ( a3 == v7 )
  {
LABEL_14:
    v17 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v17 + 48) > *(_QWORD *)(v8 + 32) )
      goto LABEL_18;
    *(_QWORD *)(v8 + 40) = v17 + 48;
    *(_DWORD *)v17 = 34101256;
    *(_DWORD *)(v17 + 4) = 0;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 40) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v17 + 20) = 46923644;
      *(_DWORD *)(v17 + 16) = v7[93585974];
      *(_DWORD *)(v17 + 12) = (unsigned __int64)(v17 - (_QWORD)v7) >> 3;
      v22 = v17;
      MEMORY[0x18503B9A0](a1, a2, a3: v17, a4, a5: 0);
      sub_182769900(a1: v19, a2: v20, a3: v22, a4: v18, a5: &a7);
LABEL_17:
      sub_182771080(a1, a2, (_DWORD)a3, a4: v11, a5, a6, a7: v21);
LABEL_18:
      v17 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
  }
  v9 = a3[10];
  if ( (_DWORD)v9 != 0 )
    v10 = v7[2 * v9 + 18];
  else
    v10 = a3[18];
  v25 = v10;
  v11 = a3[2];
  v22 = (__int64)&v7[2 * v11];
  if ( (_DWORD)v11 == 0 )
    goto LABEL_17;
  v12 = MEMORY[0x181E653E0](a1, a2, a3: &v7[2 * v11]);
  if ( v25 < 1 || v12 == 0 )
  {
    v24 = v12;
    MEMORY[0x182090940](a1: v14, a2: v15, a3: v23);
LABEL_13:
    MEMORY[0x181EB84E0]();
    goto LABEL_14;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_18277F280(a1: v14, a2: v15, a3: v13);
  return (unsigned int)v25;
}
