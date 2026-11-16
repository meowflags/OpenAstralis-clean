// sub_181EA3FA0
// rva 0x01ea3fa0  size 528  section .text  group text
// window base 0x181ea3fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA3FA0(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  double v10; // xmm0_8
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rsi
  double v24; // xmm0_8
  char v25; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+10h] [rbp-38h]
  BOOL v27; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v28; // [rsp+20h] [rbp-28h]
  unsigned __int64 v29; // [rsp+28h] [rbp-20h]
  unsigned __int64 *v30; // [rsp+30h] [rbp-18h]
  __int64 v31; // [rsp+38h] [rbp-10h]
  unsigned __int64 v32; // [rsp+40h] [rbp-8h]

  v32 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v6 + 8) )
  {
    v24 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v25);
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
    return sub_181EA41C0(a1: v24);
  }
  v31 = a6;
  v7 = (unsigned __int64 *)sub_181EA3E00(a1, a2, a3: a6);
  v30 = v7;
  v11 = *v7;
  if ( *v7 <= v32 && v32 <= v7[1] )
  {
    v29 = v7[1];
    if ( v7[2] != 0 )
      JUMPOUT(0x303D2E0B8LL);
    v28 = v11;
    v26 = nullptr;
    v27 = false;
    sub_181EA41C0(a1: v10);
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v27);
    return 1;
  }
  v29 = v7[1];
  v28 = v11;
  v12 = (_QWORD *)v7[3];
  if ( v12 == nullptr )
  {
    v15 = v32;
LABEL_17:
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v8, a2: v9, a3: v12, a4: v15);
    return 0;
  }
  if ( (unsigned __int64)v12 > v32 || (unsigned __int64)v12 + *v12 <= v32 )
  {
    v13 = v12[2];
    if ( v13 != 0 )
      v14 = (_QWORD *)((char *)v12 + v13);
    else
      v14 = nullptr;
    v15 = v32;
    while ( v14 != nullptr )
    {
      if ( (unsigned __int64)v14 <= v15 && (unsigned __int64)v14 + *v14 > v15 )
      {
        v12 = v14;
        goto LABEL_28;
      }
      v12 = (_QWORD *)v14[2];
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v8, a2: v9, a3: v12);
      if ( v12 != nullptr )
      {
        v12 = (_QWORD *)((char *)v12 + (_QWORD)v14);
        v14 = v12;
      }
      else
      {
        v14 = nullptr;
      }
    }
    goto LABEL_17;
  }
  v15 = v32;
LABEL_28:
  v27 = (unsigned __int64)v12 + v12[4] <= v15;
  v26 = v12;
  sub_181EA41C0(a1: v10);
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v22, a2: v23, a3: v26, a4: v28);
  return 1;
}
