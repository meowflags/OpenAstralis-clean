// sub_1932B8E78
// rva 0x132b8e78  size 68  section .text  group text
// window base 0x1932b8e78: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B8E78(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi

  v5 = (*(__int64 (**)(void))(*(_QWORD *)a4 + 760LL))();
  if ( v5 != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 808LL))(
             a1: v6,
             a2: v7,
             a3: v5,
             a4,
             a5: MEMORY[0x337F90]);
  else
    return -1;
}
