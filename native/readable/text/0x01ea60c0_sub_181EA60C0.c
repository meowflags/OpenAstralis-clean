// sub_1EA60C0
// rva 0x01ea60c0  size 166  section .text  group text
// window base 0x181ea60c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA60C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9

  if ( a5 >= 0xF )
  {
    sub_276F0E0();
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(v5 + 4LL * a5 + 376654036);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_8:
    sub_276EFE0();
    goto LABEL_9;
  }
  v7 = *(unsigned int *)(v5 + 8 * v6 + 12);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_9:
    sub_276EFE0(a1, a2, a3: v7, a4: v5 + 8 * v6);
    goto LABEL_10;
  }
  v8 = *(unsigned int *)(v5 + 4LL * a5 + 376654108);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_10:
    sub_276EFE0();
    goto LABEL_11;
  }
  v9 = *(unsigned int *)(v5 + 8 * v8 + 12);
  v10 = *(_QWORD *)(v5 + 8 * v7 + 8) + (*(_QWORD *)(v5 + 8 * v7 + 16) << 19);
  if ( (_DWORD)v9 != 0 )
    return *(_QWORD *)(v5 + 8 * v9 + 8) + (*(_QWORD *)(v5 + 8 * v9 + 16) << 19) + v10;
LABEL_11:
  sub_276EFE0(a1, a2, a3: v10);
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
  return sub_1EA6180(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17);
}
