// sub_2787B60
// rva 0x02787b60  size 521  section .text  group text
// window base 0x182787b60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2787B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  _QWORD v25[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  __int64 v28; // [rsp+50h] [rbp-28h]
  __int64 v29; // [rsp+58h] [rbp-20h]
  __int64 v30; // [rsp+60h] [rbp-18h]
  __int64 v31; // [rsp+68h] [rbp-10h]
  __int64 v32; // [rsp+70h] [rbp-8h]

  v30 = a3;
  v29 = a5;
  if ( (unsigned __int64)v25 <= *(_QWORD *)(v6 + 8) )
    JUMPOUT(0x182787D1FLL);
  v7 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v7 + 16) > *(_QWORD *)(v6 + 32) )
  {
    v7 = sub_1EAA920(a1, a2, a3: 40543856);
    a5 = v29;
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v7 + 16;
    *(_DWORD *)v7 = 40543856;
    *(_DWORD *)(v7 + 4) = 0;
    *(_QWORD *)(v7 + 8) = 0;
  }
  v28 = v7;
  v27 = v5 + 8LL * *(unsigned int *)(a5 + 4);
  sub_2789A20(a1, a2, a3: v7, a4: v27, a5: v27);
  v11 = *(unsigned int *)(v28 + 4);
  if ( (_DWORD)v11 == 0 )
    JUMPOUT(0x182787D25LL);
  v12 = *(unsigned int *)(v5 + 8 * v11 + 4);
  v13 = v5 + 8 * v11;
  if ( (_DWORD)v12 == 0 )
    JUMPOUT(0x182787D2CLL);
  v26 = v13;
  v14 = sub_1EBBB60(a1: v9, a2: v10, a3: v5 + 8 * v12, a4: v8, a5: 0);
  if ( v14 != 0 )
  {
    LODWORD(v25[4]) = 2;
    LODWORD(v25[5]) = 128;
    v25[6] = 0;
    v31 = v14;
    if ( MEMORY[0x10e44d18]/* 0x10e44d18 */(a1: v15, a2: v16, a3: 0x40000000, a4: v14, a5: 3, a6: 0) != -1 )
      JUMPOUT(0x304ED0C5CLL);
    v32 = 0;
  }
  else
  {
    v32 = 0;
  }
  v17 = *(unsigned int *)(v28 + 4);
  if ( (_DWORD)v17 == 0 )
    JUMPOUT(0x182787D33LL);
  v18 = *(unsigned int *)(v5 + 8 * v17 + 4);
  v19 = v5 + 8 * v17;
  if ( (_DWORD)v18 == 0 )
    JUMPOUT(0x182787D38LL);
  v26 = v19;
  sub_1EBBCC0(a1: v15, a2: v16, a3: v5 + 8 * v18);
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280(a1: v22, a2: v23, a3: v20, a4: v21);
  return v32;
}
