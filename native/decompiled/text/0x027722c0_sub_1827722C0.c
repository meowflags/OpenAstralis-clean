// sub_1827722C0
// rva 0x027722c0  size 344  section .text  group text
// window base 0x1827722c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_1827722C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  _QWORD *result; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+18h] [rbp-30h]
  _QWORD *v14; // [rsp+28h] [rbp-20h]

  *(_QWORD *)(a3 + 48) = a5;
  *(_QWORD *)(a3 + 32) = a6;
  *(_BYTE *)(a3 + 56) = 0;
  result = *(_QWORD **)(v6 + 376178840);
  if ( result != nullptr && result[9] <= (unsigned __int64)(a6 - result[10]) )
  {
    for ( result = (_QWORD *)result[20];
          result != nullptr && result[9] <= (unsigned __int64)(a6 - result[10]);
          result = (_QWORD *)result[20] )
    {
      ;
    }
  }
  v14 = result;
  *(_QWORD *)(a3 + 40) = result;
  if ( result != nullptr )
  {
    v13 = v6 + 8LL * *(unsigned int *)MEMORY[0x1815A85E0](a1, a2, a3: result[22], a4: result[22], a5: 0);
    MEMORY[0x1815B1540](a1: v8, a2: v9, a3: v14, a4: a6, a5: a6 - v14[10] + v14[24], a6: a3);
    return (_QWORD *)MEMORY[0x1815AE5C0](a1: v11, a2: v12, a3: v14, a4: v10, a5: v13);
  }
  else
  {
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0;
    *(_QWORD *)(a3 + 24) = -1;
    *(_QWORD *)(a3 + 16) = -1;
  }
  return result;
}
