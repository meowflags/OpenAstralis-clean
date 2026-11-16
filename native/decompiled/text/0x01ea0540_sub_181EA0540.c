// sub_181EA0540
// rva 0x01ea0540  size 576  section .text  group text
// window base 0x181ea0540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA0540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  BOOL v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  double v25; // xmm0_8
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+8h] [rbp-20h]
  _QWORD *v28; // [rsp+10h] [rbp-18h]
  BOOL v29; // [rsp+1Ch] [rbp-Ch]
  unsigned __int64 v30; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v26);
    return sub_181EA0780(a1: v25);
  }
  v8 = *(_QWORD **)(a3 + 16);
  if ( v8 != nullptr )
  {
    if ( (unsigned __int64)v8 <= a6 && (unsigned __int64)v8 + *v8 > a6 )
    {
LABEL_32:
      v17 = (unsigned __int64)v8 + v8[4] <= a6;
      v30 = a6;
      v29 = v17;
      v28 = v8;
      v27 = a3;
      sub_181EA0400(a1: v6 + 365198480, a2: v17, a3, a4: v17, a5: v6 + 376612120, a6: (__int64)v8);
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v19, a2: v20, a3: v18, a4: v29, a5: v28);
      return 1;
    }
    v11 = v8[2];
    if ( v11 != 0 )
      v12 = (_QWORD *)((char *)v8 + v11);
    else
      v12 = nullptr;
    while ( v12 != nullptr )
    {
      if ( (unsigned __int64)v12 <= a6 && (unsigned __int64)v12 + *v12 > a6 )
      {
        v8 = v12;
        goto LABEL_32;
      }
      v13 = v12[2];
      if ( *(int *)(v7 + 16) <= 0 )
        v12 = (_QWORD *)MEMORY[0x18277F280](a1, a2, a3, a4, a5: v13);
      if ( v13 != 0 )
        v12 = (_QWORD *)((char *)v12 + v13);
      else
        v12 = nullptr;
    }
  }
  v9 = *(_QWORD **)(a3 + 32);
  if ( v9 == nullptr )
  {
LABEL_4:
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v30 = a6;
      v27 = a3;
      MEMORY[0x18277F280]();
    }
    return 0;
  }
  if ( (unsigned __int64)v9 > a6 || (unsigned __int64)v9 + *v9 <= a6 )
  {
    v14 = v9[2];
    if ( v14 != 0 )
      v15 = (_QWORD *)((char *)v9 + v14);
    else
      v15 = nullptr;
    while ( v15 != nullptr )
    {
      if ( (unsigned __int64)v15 <= a6 && (unsigned __int64)v15 + *v15 > a6 )
      {
        v9 = v15;
        goto LABEL_36;
      }
      v16 = v15[2];
      if ( *(int *)(v7 + 16) <= 0 )
        v15 = (_QWORD *)MEMORY[0x18277F280](a1, a2, a3, a4, a5: v16);
      if ( v16 != 0 )
        v15 = (_QWORD *)((char *)v15 + v16);
      else
        v15 = nullptr;
    }
    goto LABEL_4;
  }
LABEL_36:
  v30 = a6;
  v27 = a3;
  v29 = (unsigned __int64)v9 + v9[4] <= a6;
  v28 = v9;
  sub_181EA0400(a1: v6 + 350885384, a2: v29, a3, a4: (int)v28, a5: v6 + 376612120, a6: (__int64)v28);
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v23, a2: v24, a3: v21, a4: v22, a5: v28);
  return 1;
}
