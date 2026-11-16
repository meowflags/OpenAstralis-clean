// sub_1827533E0
// rva 0x027533e0  size 646  section .text  group text
// window base 0x1827533e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827533E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, _DWORD *, double, double))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  double v12; // xmm0_8
  __int64 v13; // rax
  int v14; // ecx
  double v15; // xmm1_8
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // xmm0_8
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_43;
  if ( a5 == v6 )
    goto LABEL_42;
  if ( a5[2] != 3 )
    goto LABEL_42;
  v8 = (unsigned int)a5[3];
  if ( (_DWORD)v8 != 0 )
  {
    v9 = v6[2 * v8] >> 3;
    if ( (unsigned __int16)v6[2 * v6[2 * v9 + 5] + 3 + (v6[2 * v9 + 11] & (0xEE1u >> HIBYTE(v6[2 * v9 + 11])))] != 3809 )
      goto LABEL_42;
  }
  v10 = (unsigned int)a5[4];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_42;
  v11 = v6[2 * v10] >> 3;
  switch ( v11 )
  {
    case 4260452:
      v12 = (double)*(__int64 *)&v6[2 * v10 + 2];
      break;
    case 4260808:
      v12 = (double)(int)v6[2 * v10 + 1];
      break;
    case 4260831:
      v12 = *(double *)&v6[2 * v10 + 2];
      break;
    case 4279946:
      v12 = *(float *)&v6[2 * v10 + 1];
      break;
    case 4288437:
      v12 = (double)SLOBYTE(v6[2 * v10 + 1]);
      break;
    case 4288459:
      v12 = (double)SLOWORD(v6[2 * v10 + 1]);
      break;
    case 4288481:
      v12 = (double)LOWORD(v6[2 * v10 + 1]);
      break;
    default:
      goto LABEL_42;
  }
  v13 = (unsigned int)a5[5];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_42:
    sub_182757000(a1, a2, a3: a5);
LABEL_43:
    MEMORY[0x181EB84E0]();
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
    return sub_182753680();
  }
  v14 = v6[2 * v13] >> 3;
  switch ( v14 )
  {
    case 4260452:
      v15 = (double)*(__int64 *)&v6[2 * v13 + 2];
      goto LABEL_12;
    case 4260808:
      v15 = (double)(int)v6[2 * v13 + 1];
      goto LABEL_12;
    case 4260831:
      v15 = *(double *)&v6[2 * v13 + 2];
LABEL_12:
      a6(a1, a2, a3: &v6[2 * v8], a4: v12, a5: v15);
      result = *(_QWORD *)(v7 + 40);
      v20 = result + 16;
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v7 + 32) )
      {
        v22 = v18;
        result = MEMORY[0x181EAA920](a1: v16, a2: v17, a3: 34086648);
        v18 = v22;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v20;
        *(_DWORD *)result = 34086648;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      *(_QWORD *)(result + 8) = v18;
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v16, a2: v17, a3: v20);
      return result;
    case 4279946:
      v15 = *(float *)&v6[2 * v13 + 1];
      goto LABEL_12;
    case 4288437:
      v15 = (double)SLOBYTE(v6[2 * v13 + 1]);
      goto LABEL_12;
    case 4288459:
      v15 = (double)SLOWORD(v6[2 * v13 + 1]);
      goto LABEL_12;
    case 4288481:
      v15 = (double)LOWORD(v6[2 * v13 + 1]);
      goto LABEL_12;
    default:
      goto LABEL_42;
  }
}
