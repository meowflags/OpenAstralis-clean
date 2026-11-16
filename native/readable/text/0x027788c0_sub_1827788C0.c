// sub_27788C0
// rva 0x027788c0  size 166  section .text  group text
// window base 0x1827788c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_27788C0()
{
  __int64 v0; // r14
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 (*v4)(void); // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 (*v8)(void); // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-20h]

  if ( MEMORY[0x10e44238]/* 0x10e44238 */ == 0 )
  {
    v8 = MEMORY[0x10e444b0]/* 0x10e444b0 */;
    v1 = MEMORY[0x10e444b0]/* 0x10e444b0 */();
    if ( (_DWORD)v1 == -1 )
    {
      sub_28C1C40(a1: v2, a2: v3, a3: v0 + 366624936);
    }
    else
    {
      v4 = v8;
      v9 = v1;
      v5 = v4();
      if ( (_DWORD)v5 != -1 )
      {
        MEMORY[0x10e44aa0]/* 0x10e44aa0 */ = v9;
        MEMORY[0x10e44510]/* 0x10e44510 */ = v5;
        MEMORY[0x10e44238]/* 0x10e44238 */ = 1;
        return;
      }
    }
    sub_28C1C40(a1: v6, a2: v7, a3: v0 + 366624936);
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
    sub_2778980();
  }
}
