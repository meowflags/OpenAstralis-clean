// sub_18159CC00
// rva 0x0159cc00  size 239  section .text  group text
// window base 0x18159cc00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159CC00(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r15
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+10h] [rbp-28h]
  __int64 v16; // [rsp+18h] [rbp-20h]
  __int64 v17; // [rsp+20h] [rbp-18h]
  _QWORD *v18; // [rsp+28h] [rbp-10h]
  unsigned __int64 v19; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    return sub_18159CD00(a1: v11, a2: v12, a3: v9, a4: v10, a5: v13);
  }
  v4 = *(_QWORD **)(v3 + 232);
  if ( v4 == nullptr )
    v4 = a3 + 4;
  v19 = (unsigned __int64)v4;
  v18 = a3;
  if ( v4 <= a3 )
  {
    v5 = a3;
LABEL_6:
    if ( *(int *)(v3 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3, a4: v5);
    return 0;
  }
  v17 = *a3;
  if ( (unsigned int)sub_18159D8A0(a1, a2, a3: v17) == 0 )
  {
    a3 = v18;
    v8 = v18 + 1;
    while ( 1 )
    {
      v5 = v8;
      if ( v19 <= (unsigned __int64)v8 )
        goto LABEL_6;
      v16 = *v8;
      v15 = v8;
      if ( (unsigned int)sub_18159D8A0(a1, a2, a3: v16) != 0 )
      {
        v7 = v16;
        result = (__int64)v15;
        goto LABEL_11;
      }
      v8 = v15 + 1;
      if ( *(int *)(v3 + 16) <= 0 )
        v8 = (_QWORD *)MEMORY[0x18277F280]();
    }
  }
  v7 = v17;
  result = (__int64)v18;
LABEL_11:
  if ( *(int *)(v3 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3: v19, a4: v7);
  return result;
}
