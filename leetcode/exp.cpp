  const buildBridgeBFS = () => {
    let distance = -1;
    let currentQueue = [];

    while (queue.length) {
      currentQueue = queue;
      queue = [];

      for (let [row, col] of currentQueue) {
        for (let [dx, dy] of DIRECTIONS) {
          const nextRow = row + dx;
          const nextCol = col + dy;

          if (
            nextRow >= 0 &&
            nextRow < rows &&
            nextCol >= 0 &&
            nextCol < cols &&
            grid[nextRow][nextCol] !== 2
          ) {
            if (grid[nextRow][nextCol] === 1) {
              return distance + 1;
            }

            queue.push([nextRow, nextCol]);
            grid[nextRow][nextCol] = 2;
          }
        }
      }

      distance++;
    }

    return -1;
  };