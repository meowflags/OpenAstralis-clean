// sub_182750EA0
// rva 0x02750ea0  size 912  section .text  group text
// window base 0x182750ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182750EA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_QWORD, _QWORD, __int64, _QWORD, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // rsi
  int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v18; // ebx
  unsigned int v19; // ecx
  __int64 v20; // rbx
  int v21; // ebp
  unsigned int v22; // ebx
  __int64 v23; // rbp
  int v24; // r10d
  int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // xmm0_8
  __int64 result; // rax
  __int64 v30; // rdx
  _DWORD v31[4]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v32; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v31 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_58;
  if ( a5 == v6 )
    goto LABEL_57;
  if ( a5[2] != 6 )
    goto LABEL_57;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 != 0 )
  {
    v10 = v6[2 * v9] >> 3;
    if ( (unsigned __int16)v6[2 * v6[2 * v10 + 5] + 3 + (v6[2 * v10 + 11] & (0x10B1u >> HIBYTE(v6[2 * v10 + 11])))] != 4273 )
      goto LABEL_57;
  }
  v11 = (unsigned int)a5[4];
  if ( (_DWORD)v11 == 0 )
    goto LABEL_57;
  v12 = v6[2 * v11] >> 3;
  switch ( v12 )
  {
    case 4260808:
      v13 = v6[2 * v11 + 1];
      break;
    case 4288437:
      v13 = SLOBYTE(v6[2 * v11 + 1]);
      break;
    case 4288459:
      v13 = SLOWORD(v6[2 * v11 + 1]);
      break;
    case 4288481:
      v13 = LOWORD(v6[2 * v11 + 1]);
      break;
    default:
      goto LABEL_57;
  }
  v14 = (unsigned int)a5[5];
  if ( (_DWORD)v14 == 0 )
    goto LABEL_57;
  v15 = v6[2 * v14] >> 3;
  switch ( v15 )
  {
    case 4260808:
      v16 = v6[2 * v14 + 1];
      break;
    case 4288437:
      v16 = SLOBYTE(v6[2 * v14 + 1]);
      break;
    case 4288459:
      v16 = SLOWORD(v6[2 * v14 + 1]);
      break;
    case 4288481:
      v16 = LOWORD(v6[2 * v14 + 1]);
      break;
    default:
      goto LABEL_57;
  }
  v17 = (unsigned int)a5[6];
  if ( (_DWORD)v17 == 0 )
    goto LABEL_57;
  v18 = v6[2 * v17] >> 3;
  switch ( v18 )
  {
    case 4260808:
      v19 = v6[2 * v17 + 1];
      break;
    case 4288437:
      v19 = SLOBYTE(v6[2 * v17 + 1]);
      break;
    case 4288459:
      v19 = SLOWORD(v6[2 * v17 + 1]);
      break;
    case 4288481:
      v19 = LOWORD(v6[2 * v17 + 1]);
      break;
    default:
      goto LABEL_57;
  }
  v20 = (unsigned int)a5[7];
  if ( (_DWORD)v20 == 0 )
    goto LABEL_57;
  v21 = v6[2 * v20] >> 3;
  switch ( v21 )
  {
    case 4260808:
      v22 = v6[2 * v20 + 1];
      break;
    case 4288437:
      v22 = SLOBYTE(v6[2 * v20 + 1]);
      break;
    case 4288459:
      v22 = SLOWORD(v6[2 * v20 + 1]);
      break;
    case 4288481:
      v22 = LOWORD(v6[2 * v20 + 1]);
      break;
    default:
      goto LABEL_57;
  }
  v23 = (unsigned int)a5[8];
  if ( (_DWORD)v23 == 0 )
  {
LABEL_57:
    sub_182756FC0();
LABEL_58:
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
    return sub_182751240();
  }
  v24 = v6[2 * v23] >> 3;
  switch ( v24 )
  {
    case 4260808:
      v25 = v6[2 * v23 + 1];
LABEL_21:
      v31[2] = v25;
      a6(a1: v16, a2: v19, a3, a4: v22, a5: &v6[2 * v9], a6: v13);
      result = *(_QWORD *)(v7 + 40);
      v30 = result + 16;
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v7 + 32) )
      {
        v32 = v28;
        result = MEMORY[0x181EAA920](a1: v26, a2: v27, a3: 34086648);
        v28 = v32;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v30;
        *(_DWORD *)result = 34086648;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      *(_QWORD *)(result + 8) = v28;
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v26, a2: v27, a3: v30);
      return result;
    case 4288437:
      v25 = SLOBYTE(v6[2 * v23 + 1]);
      goto LABEL_21;
    case 4288459:
      v25 = SLOWORD(v6[2 * v23 + 1]);
      goto LABEL_21;
    case 4288481:
      v25 = LOWORD(v6[2 * v23 + 1]);
      goto LABEL_21;
    default:
      goto LABEL_57;
  }
}
