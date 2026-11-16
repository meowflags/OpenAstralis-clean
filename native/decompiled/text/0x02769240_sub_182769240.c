// sub_182769240
// rva 0x02769240  size 78  section .text  group text
// window base 0x182769240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182769240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 _98; // [rsp+98h] [rbp+0h] BYREF
  __int64 *vars8; // [rsp+A0h] [rbp+8h]
  __int128 vars10; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int128 vars80; // [rsp+118h] [rbp+80h]
  __int64 vars90; // [rsp+128h] [rbp+90h]
  int vars90_8; // [rsp+130h] [rbp+98h]
  int i; // [rsp+134h] [rbp+9Ch]
  __int128 *varsA0_8; // [rsp+140h] [rbp+A8h]
  int varsB0; // [rsp+148h] [rbp+B0h]
  int varsB0_4; // [rsp+14Ch] [rbp+B4h]
  __int64 varsB0_8; // [rsp+150h] [rbp+B8h]
  __int64 varsC0; // [rsp+158h] [rbp+C0h]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+C8h]

  varsB0_8 = a3;
  varsB0_4 = a5;
  varsB0 = a6;
  varsA0_8 = &vars10;
  v9 = *(_QWORD *)(v8 + 56);
  v10 = a3;
  vars8 = &_98;
  sub_182772F00(a1: 0, a2: 0, a3: &vars10, a4: v9, a5: v8, a6: a3);
  result = sub_182772760(a1: v12, a2: v13, a3: varsA0_8, a4: v11, a5: v8, a6: v7);
  v17 = vars8;
  if ( (_DWORD)result == 0 )
    return result;
  v18 = (__int64)varsA0_8;
  v19 = *((_QWORD *)varsA0_8 + 10);
  v20 = (_QWORD *)varsA0_8 + 5;
  if ( v19 == 0 )
  {
    v18 = MEMORY[0x1828C1C40](a1: v15, a2: v16, a3: v7 + 370785312);
    v17 = vars8;
    goto LABEL_15;
  }
  v21 = *((_QWORD *)varsA0_8 + 11);
  v10 = *((_QWORD *)varsA0_8 + 6);
  if ( v10 != 0 )
  {
LABEL_15:
    varsC0 = v6;
    vars90_8 = varsB0_4;
LABEL_16:
    v26 = v10 + *(_QWORD *)(v18 + 72);
    vars8 = v17;
    vars90 = v10;
    vars80 = __PAIR128__(v26, v21);
    sub_182772280();
    v27 = *(unsigned int *)(v8 + 272);
    *(_DWORD *)(v8 + 272) = 0;
    result = v7 + 8 * v27;
    if ( vars90_8 != 0 )
    {
      if ( &_98 == (__int64 *)vars80 )
        __asm { jmp     rsi }
      retaddr = *((_UNKNOWN **)&vars80 + 1);
      return result;
    }
LABEL_21:
    varsC0 = *((_QWORD *)&vars80 + 1);
    return (*((__int64 (**)(void))&vars80 + 1))();
  }
  v22 = *((_QWORD *)varsA0_8 + 5);
  if ( (v22 & 2) != 0 )
  {
    MEMORY[0x1828C1C40](a1: v15, a2: v16, a3: v7 + 370860920);
    goto LABEL_21;
  }
  if ( (v22 & 4) != 0 )
    JUMPOUT(0x304EB230ELL);
  for ( i = 0; ; i = 0 )
  {
    vars8 = v17;
    result = sub_182772760(a1: v15, a2: v16, a3: v18, a4: v20, a5: v8, a6: v7);
    v17 = vars8;
    if ( (_DWORD)result == 0 )
      break;
    v18 = (__int64)varsA0_8;
    if ( *((_QWORD *)varsA0_8 + 10) == 0 )
    {
      v18 = MEMORY[0x1828C1C40](a1: v15, a2: v16, a3: v7 + 370785312);
      v17 = vars8;
LABEL_23:
      v10 = v24;
      v21 = v23;
      varsC0 = v6;
      vars90_8 = i;
      goto LABEL_16;
    }
    v23 = *((_QWORD *)varsA0_8 + 11);
    v24 = *((_QWORD *)varsA0_8 + 6);
    if ( v24 != 0 )
      goto LABEL_23;
    v25 = *((_QWORD *)varsA0_8 + 5);
    if ( (v25 & 2) != 0 )
    {
      MEMORY[0x1828C1C40](a1: v15, a2: v7 + 370860920, a3: v7 + 370860920, a4: v23);
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
      return sub_1827695C0();
    }
    if ( (v25 & 4) != 0 )
      JUMPOUT(0x304EB2366LL);
    v20 = nullptr;
  }
  return result;
}
