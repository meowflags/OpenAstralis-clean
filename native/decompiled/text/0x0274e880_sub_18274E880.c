// sub_18274E880
// rva 0x0274e880  size 285  section .text  group text
// window base 0x18274e880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274E880(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // xmm0_8
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_22;
  if ( a5 == v6 || *(_DWORD *)(a5 + 8) != 1 || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) == 0 )
  {
LABEL_21:
    sub_182757000(a1, a2, a3: a5);
LABEL_22:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18274E9A0();
  }
  v9 = *(_DWORD *)(v6 + 8 * v8) >> 3;
  switch ( v9 )
  {
    case 4260452:
      v10 = *(_QWORD *)(v6 + 8 * v8 + 8);
LABEL_7:
      a6(a1, a2, a3: v10);
      result = *(_QWORD *)(v7 + 40);
      v15 = result + 16;
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v7 + 32) )
      {
        v17 = v13;
        result = MEMORY[0x181EAA920](a1: v11, a2: v12, a3: 34086648);
        v13 = v17;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v15;
        *(_DWORD *)result = 34086648;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      *(_QWORD *)(result + 8) = v13;
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v11, a2: v12, a3: v15);
      return result;
    case 4260808:
      v10 = *(int *)(v6 + 8 * v8 + 4);
      goto LABEL_7;
    case 4288437:
      v10 = *(char *)(v6 + 8 * v8 + 4);
      goto LABEL_7;
    case 4288459:
      v10 = *(__int16 *)(v6 + 8 * v8 + 4);
      goto LABEL_7;
    case 4288481:
      v10 = *(unsigned __int16 *)(v6 + 8 * v8 + 4);
      goto LABEL_7;
    default:
      goto LABEL_21;
  }
}
